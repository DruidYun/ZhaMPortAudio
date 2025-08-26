// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

// DLL 句柄和函数指针
void* DLLHandle = nullptr;
typedef int (*AddNumbersFunc)(int, int);
AddNumbersFunc AddNumbersPtr = nullptr;

                        

class FZhaMPortAudioModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
