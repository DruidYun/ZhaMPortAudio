#pragma once

#include "CoreMinimal.h"
#include "portaudio.h"

#include "UObject/NoExportTypes.h"
#include "PortAudioRecorder.generated.h"
/**
 * 这个类封装了 PortAudio 的录音功能，暴露给蓝图使用
 */


struct WAVHeader
{
	char ChunkID[4];              // "RIFF"
	uint32 ChunkSize;             // 总文件大小 - 8
	char Format[4];               // "WAVE"
	char Subchunk1ID[4];          // "fmt "
	uint32 Subchunk1Size;         // 16 (for PCM)
	uint16 AudioFormat;           // 1 (for PCM)
	uint16 NumChannels;           // 1 (mono) or 2 (stereo)
	uint32 SampleRate;            // 44100 or 16000
	uint32 ByteRate;              // SampleRate * NumChannels * BitsPerSample / 8
	uint16 BlockAlign;            // NumChannels * BitsPerSample / 8
	uint16 BitsPerSample;         // 16 (16-bit samples)
	char Subchunk2ID[4];          // "data"
	uint32 Subchunk2Size;         // 数据大小
};
UCLASS(Blueprintable)
class ZHAMPORTAUDIO_API UPortAudioRecorder : public UObject
{
	GENERATED_BODY()

public:
	// 构造函数，初始化成员变量
	UPortAudioRecorder();

	// 初始化 PortAudio
	UFUNCTION(BlueprintCallable, Category = "PortAudio")
	bool Initialize();

	// 开始录音
	UFUNCTION(BlueprintCallable, Category = "PortAudio")
	bool StartRecording();

	// 停止录音并保存为文件
	UFUNCTION(BlueprintCallable, Category = "PortAudio")
	FString StopRecording(const FString& FilePath);

private:
	static int StreamCallback(const void* inputBuffer, void* outputBuffer,
							  unsigned long framesPerBuffer, const PaStreamCallbackTimeInfo* timeInfo,
							  PaStreamCallbackFlags statusFlags, void* userData);

	PaStream* Stream;
	TArray<float> RecordedData;  // 存储录制的数据
	bool bIsRecording;
};
