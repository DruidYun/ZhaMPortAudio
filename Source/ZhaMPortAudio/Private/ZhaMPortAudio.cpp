// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZhaMPortAudio.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"
#define LOCTEXT_NAMESPACE "FZhaMPortAudioModule"

void FZhaMPortAudioModule::StartupModule()
{
	FString DLLPath = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("ZhaMPortAudio/Binaries/Win64/portaudio_x64.dll"));
	UE_LOG(LogTemp, Warning, TEXT("Trying to load DLL from path: %s"), *DLLPath);

	

	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FZhaMPortAudioModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FZhaMPortAudioModule, ZhaMPortAudio)