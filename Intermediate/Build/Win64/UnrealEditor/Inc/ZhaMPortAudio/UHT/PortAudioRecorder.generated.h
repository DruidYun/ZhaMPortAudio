// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PortAudioRecorder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZHAMPORTAUDIO_PortAudioRecorder_generated_h
#error "PortAudioRecorder.generated.h already included, missing '#pragma once' in PortAudioRecorder.h"
#endif
#define ZHAMPORTAUDIO_PortAudioRecorder_generated_h

#define FID_Projects_Ruishi_t54_WLMQJC_A_AI_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Projects_Ruishi_t54_WLMQJC_A_AI_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPortAudioRecorder(); \
	friend struct Z_Construct_UClass_UPortAudioRecorder_Statics; \
public: \
	DECLARE_CLASS(UPortAudioRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZhaMPortAudio"), NO_API) \
	DECLARE_SERIALIZER(UPortAudioRecorder)


#define FID_Projects_Ruishi_t54_WLMQJC_A_AI_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPortAudioRecorder(UPortAudioRecorder&&); \
	UPortAudioRecorder(const UPortAudioRecorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortAudioRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortAudioRecorder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPortAudioRecorder) \
	NO_API virtual ~UPortAudioRecorder();


#define FID_Projects_Ruishi_t54_WLMQJC_A_AI_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_29_PROLOG
#define FID_Projects_Ruishi_t54_WLMQJC_A_AI_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Ruishi_t54_WLMQJC_A_AI_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Ruishi_t54_WLMQJC_A_AI_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_32_INCLASS_NO_PURE_DECLS \
	FID_Projects_Ruishi_t54_WLMQJC_A_AI_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZHAMPORTAUDIO_API UClass* StaticClass<class UPortAudioRecorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Ruishi_t54_WLMQJC_A_AI_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
