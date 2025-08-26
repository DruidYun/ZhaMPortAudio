#include "PortAudioRecorder.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/Base64.h"
#include "HAL/PlatformFilemanager.h"
#include "Sound/SoundWave.h"

// 构造函数
UPortAudioRecorder::UPortAudioRecorder()
    : Stream(nullptr), bIsRecording(false)
{
    Pa_Initialize();  // 初始化 PortAudio
    
}

// 初始化 PortAudio
bool UPortAudioRecorder::Initialize()
{
    PaError err = Pa_Initialize();
    if (err != paNoError)
    {
        UE_LOG(LogTemp, Error, TEXT("PortAudio initialization failed: %s"), UTF8_TO_TCHAR(Pa_GetErrorText(err)));
        return false;
    }
    return true;
}

// 录音回调函数
int UPortAudioRecorder::StreamCallback(const void* inputBuffer, void* outputBuffer,
                                        unsigned long framesPerBuffer, const PaStreamCallbackTimeInfo* timeInfo,
                                        PaStreamCallbackFlags statusFlags, void* userData)
{
    UPortAudioRecorder* This = (UPortAudioRecorder*)userData;

    if (inputBuffer != nullptr)
    {
        const float* input = (const float*)inputBuffer;
        for (unsigned long i = 0; i < framesPerBuffer; ++i)
        {
            This->RecordedData.Add(input[i]);  // 存储音频数据
        }
    }
    return paContinue;
}

// 开始录音
bool UPortAudioRecorder::StartRecording()
{
    if (bIsRecording)
    {
        UE_LOG(LogTemp, Warning, TEXT("Recording is already in progress"));
        return false;
    }

    PaError err;
    RecordedData.Empty();
    // 设置录音参数
    PaStreamParameters inputParameters;
    inputParameters.device = Pa_GetDefaultInputDevice();
    inputParameters.channelCount = 1;  // 单声道
    inputParameters.sampleFormat = paFloat32;  // 32位浮点数据
    inputParameters.suggestedLatency = Pa_GetDeviceInfo(inputParameters.device)->defaultLowInputLatency;
    inputParameters.hostApiSpecificStreamInfo = nullptr;

    // 打开录音流，设置采样率为 16000
    err = Pa_OpenStream(&Stream, &inputParameters, nullptr, 16000, 256, paClipOff, StreamCallback, this);
    if (err != paNoError)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to open PortAudio stream: %s"), UTF8_TO_TCHAR(Pa_GetErrorText(err)));
        return false;
    }

    // 启动录音流
    err = Pa_StartStream(Stream);
    if (err != paNoError)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to start PortAudio stream: %s"), UTF8_TO_TCHAR(Pa_GetErrorText(err)));
        return false;
    }

    bIsRecording = true;
    UE_LOG(LogTemp, Log, TEXT("Recording started"));

    return true;
}


FString UPortAudioRecorder::StopRecording(const FString& FilePath)
{
    if (!bIsRecording)
    {
        UE_LOG(LogTemp, Warning, TEXT("No recording in progress"));
        return FString();  // 返回空字符串，表示没有录音进行
    }

    // 停止流
    Pa_StopStream(Stream);
    Pa_CloseStream(Stream);

    bIsRecording = false;
    UE_LOG(LogTemp, Log, TEXT("Recording stopped"));

    // 生成文件路径
    FString FileName = FilePath + ".wav";

    // 如果文件已经存在，则删除
    if (FPaths::FileExists(FileName))
    {
        if (IFileManager::Get().Delete(*FileName))
        {
            UE_LOG(LogTemp, Log, TEXT("Deleted previous recording file: %s"), *FileName);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Failed to delete previous recording file: %s"), *FileName);
        }
    }

    // 构建 WAV 文件头
    WAVHeader Header;
    FMemory::Memset(&Header, 0, sizeof(WAVHeader));

    // WAV 文件头部初始化
    FMemory::Memcpy(Header.ChunkID, "RIFF", 4);
    FMemory::Memcpy(Header.Format, "WAVE", 4);
    FMemory::Memcpy(Header.Subchunk1ID, "fmt ", 4);
    Header.Subchunk1Size = 16;
    Header.AudioFormat = 1; // PCM 格式
    Header.NumChannels = 1; // 单声道
    Header.SampleRate = 16000; // 采样率设置为 16000
    Header.ByteRate = Header.SampleRate * Header.NumChannels * 2; // 16 位音频
    Header.BlockAlign = Header.NumChannels * 2;  // 每个样本2字节
    Header.BitsPerSample = 16;  // 16 位
    FMemory::Memcpy(Header.Subchunk2ID, "data", 4);

    // 数据块大小
    Header.Subchunk2Size = RecordedData.Num() * sizeof(int16); // 音频数据的大小
    // 文件大小 = 头部 + 数据块
    Header.ChunkSize = 36 + Header.Subchunk2Size;

    // 创建 WAV 文件数据
    TArray<uint8> WavData;
    WavData.Append(reinterpret_cast<uint8*>(&Header), sizeof(WAVHeader));

    // 将录音数据转换为 16 位 PCM 数据，并添加到 WAV 数据
    for (int32 i = 0; i < RecordedData.Num(); ++i)
    {
        int16 Sample = FMath::Clamp<int32>(FMath::RoundToInt(RecordedData[i] * 32767), -32768, 32767);
        WavData.Append(reinterpret_cast<uint8*>(&Sample), sizeof(int16)); // 添加数据
    }

    // 保存到 WAV 文件
    bool bSaved = FFileHelper::SaveArrayToFile(WavData, *FileName);
    if (bSaved)
    {
        UE_LOG(LogTemp, Log, TEXT("Recording saved to: %s"), *FileName);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to save recording"));
    }

    // 读取 WAV 文件并生成 Base64 编码
    TArray<uint8> FileData;
    if (FFileHelper::LoadFileToArray(FileData, *FileName))
    {
        // 将文件数据转换为 Base64 编码
        FString Base64Data = FBase64::Encode(FileData);

        // 输出 Base64 编码并返回
        return Base64Data;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load saved file to generate Base64"));
        return FString(); // 返回空字符串，表示出错
    }
}