// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZhaMPortAudio/Public/PortAudioRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortAudioRecorder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ZhaMPortAudio();
ZHAMPORTAUDIO_API UClass* Z_Construct_UClass_UPortAudioRecorder();
ZHAMPORTAUDIO_API UClass* Z_Construct_UClass_UPortAudioRecorder_NoRegister();
// End Cross Module References

// Begin Class UPortAudioRecorder Function Initialize
struct Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics
{
	struct PortAudioRecorder_eventInitialize_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PortAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96 PortAudio\n" },
#endif
		{ "ModuleRelativePath", "Public/PortAudioRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96 PortAudio" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PortAudioRecorder_eventInitialize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PortAudioRecorder_eventInitialize_Parms), &Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortAudioRecorder, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::PortAudioRecorder_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::PortAudioRecorder_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPortAudioRecorder_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPortAudioRecorder_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPortAudioRecorder::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Initialize();
	P_NATIVE_END;
}
// End Class UPortAudioRecorder Function Initialize

// Begin Class UPortAudioRecorder Function StartRecording
struct Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics
{
	struct PortAudioRecorder_eventStartRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PortAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\x80\xe5\xa7\x8b\xe5\xbd\x95\xe9\x9f\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/PortAudioRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe5\xbd\x95\xe9\x9f\xb3" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PortAudioRecorder_eventStartRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PortAudioRecorder_eventStartRecording_Parms), &Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortAudioRecorder, nullptr, "StartRecording", nullptr, nullptr, Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::PortAudioRecorder_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::PortAudioRecorder_eventStartRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPortAudioRecorder_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPortAudioRecorder_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPortAudioRecorder::execStartRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartRecording();
	P_NATIVE_END;
}
// End Class UPortAudioRecorder Function StartRecording

// Begin Class UPortAudioRecorder Function StopRecording
struct Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics
{
	struct PortAudioRecorder_eventStopRecording_Parms
	{
		FString FilePath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PortAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x81\x9c\xe6\xad\xa2\xe5\xbd\x95\xe9\x9f\xb3\xe5\xb9\xb6\xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\xba\xe6\x96\x87\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/PortAudioRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe5\xbd\x95\xe9\x9f\xb3\xe5\xb9\xb6\xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\xba\xe6\x96\x87\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortAudioRecorder_eventStopRecording_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortAudioRecorder_eventStopRecording_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortAudioRecorder, nullptr, "StopRecording", nullptr, nullptr, Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::PortAudioRecorder_eventStopRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::PortAudioRecorder_eventStopRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPortAudioRecorder_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPortAudioRecorder_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPortAudioRecorder::execStopRecording)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->StopRecording(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UPortAudioRecorder Function StopRecording

// Begin Class UPortAudioRecorder
void UPortAudioRecorder::StaticRegisterNativesUPortAudioRecorder()
{
	UClass* Class = UPortAudioRecorder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Initialize", &UPortAudioRecorder::execInitialize },
		{ "StartRecording", &UPortAudioRecorder::execStartRecording },
		{ "StopRecording", &UPortAudioRecorder::execStopRecording },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPortAudioRecorder);
UClass* Z_Construct_UClass_UPortAudioRecorder_NoRegister()
{
	return UPortAudioRecorder::StaticClass();
}
struct Z_Construct_UClass_UPortAudioRecorder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PortAudioRecorder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PortAudioRecorder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPortAudioRecorder_Initialize, "Initialize" }, // 780377697
		{ &Z_Construct_UFunction_UPortAudioRecorder_StartRecording, "StartRecording" }, // 3702904022
		{ &Z_Construct_UFunction_UPortAudioRecorder_StopRecording, "StopRecording" }, // 434840824
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPortAudioRecorder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPortAudioRecorder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ZhaMPortAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPortAudioRecorder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPortAudioRecorder_Statics::ClassParams = {
	&UPortAudioRecorder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPortAudioRecorder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPortAudioRecorder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPortAudioRecorder()
{
	if (!Z_Registration_Info_UClass_UPortAudioRecorder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPortAudioRecorder.OuterSingleton, Z_Construct_UClass_UPortAudioRecorder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPortAudioRecorder.OuterSingleton;
}
template<> ZHAMPORTAUDIO_API UClass* StaticClass<UPortAudioRecorder>()
{
	return UPortAudioRecorder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPortAudioRecorder);
UPortAudioRecorder::~UPortAudioRecorder() {}
// End Class UPortAudioRecorder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Ruishi_t54_CppUtil_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPortAudioRecorder, UPortAudioRecorder::StaticClass, TEXT("UPortAudioRecorder"), &Z_Registration_Info_UClass_UPortAudioRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPortAudioRecorder), 2544952522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Ruishi_t54_CppUtil_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_3135925229(TEXT("/Script/ZhaMPortAudio"),
	Z_CompiledInDeferFile_FID_Projects_Ruishi_t54_CppUtil_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Ruishi_t54_CppUtil_Plugins_ZhaMPortAudio_Source_ZhaMPortAudio_Public_PortAudioRecorder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
