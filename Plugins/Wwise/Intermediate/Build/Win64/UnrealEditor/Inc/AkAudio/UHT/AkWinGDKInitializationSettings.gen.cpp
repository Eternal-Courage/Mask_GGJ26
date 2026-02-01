// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h"
#include "AkAudio/Classes/InitializationSettings/AkInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWinGDKInitializationSettings() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinAnvilInitializationSettings();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinAnvilInitializationSettings_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinGDKInitializationSettings();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinGDKInitializationSettings_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin ScriptStruct FAkWinGDKAdvancedInitializationSettings
static_assert(std::is_polymorphic<FAkWinGDKAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkWinGDKAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings;
class UScriptStruct* FAkWinGDKAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWinGDKAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWinGDKAdvancedInitializationSettings>()
{
	return FAkWinGDKAdvancedInitializationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseHeadMountedDisplayAudioDevice_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_uMaxSystemAudioObjects_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of System Audio Objects to reserve. Other processes will not be able to use them. Default is 128." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHeadMountedDisplayAudioDevice;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_uMaxSystemAudioObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWinGDKAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj)
{
	((FAkWinGDKAdvancedInitializationSettings*)Obj)->UseHeadMountedDisplayAudioDevice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice = { "UseHeadMountedDisplayAudioDevice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkWinGDKAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseHeadMountedDisplayAudioDevice_MetaData), NewProp_UseHeadMountedDisplayAudioDevice_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects = { "uMaxSystemAudioObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWinGDKAdvancedInitializationSettings, uMaxSystemAudioObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_uMaxSystemAudioObjects_MetaData), NewProp_uMaxSystemAudioObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
	&NewStructOps,
	"AkWinGDKAdvancedInitializationSettings",
	Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::PropPointers),
	sizeof(FAkWinGDKAdvancedInitializationSettings),
	alignof(FAkWinGDKAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.InnerSingleton;
}
// End ScriptStruct FAkWinGDKAdvancedInitializationSettings

// Begin Class UAkWinGDKInitializationSettings Function MigrateMultiCoreRendering
struct Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics
{
	struct AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWinGDKInitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkWinGDKInitializationSettings::execMigrateMultiCoreRendering)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UAkWinGDKInitializationSettings Function MigrateMultiCoreRendering

// Begin Class UAkWinGDKInitializationSettings
void UAkWinGDKInitializationSettings::StaticRegisterNativesUAkWinGDKInitializationSettings()
{
	UClass* Class = UAkWinGDKInitializationSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MigrateMultiCoreRendering", &UAkWinGDKInitializationSettings::execMigrateMultiCoreRendering },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWinGDKInitializationSettings);
UClass* Z_Construct_UClass_UAkWinGDKInitializationSettings_NoRegister()
{
	return UAkWinGDKInitializationSettings::StaticClass();
}
struct Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 3375770105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWinGDKInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWinGDKInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // 2733679787
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWinGDKInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 1988522286
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWinGDKInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 1359137900
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::ClassParams = {
	&UAkWinGDKInitializationSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkWinGDKInitializationSettings()
{
	if (!Z_Registration_Info_UClass_UAkWinGDKInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWinGDKInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWinGDKInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkWinGDKInitializationSettings>()
{
	return UAkWinGDKInitializationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWinGDKInitializationSettings);
UAkWinGDKInitializationSettings::~UAkWinGDKInitializationSettings() {}
// End Class UAkWinGDKInitializationSettings

// Begin Class UAkWinAnvilInitializationSettings
void UAkWinAnvilInitializationSettings::StaticRegisterNativesUAkWinAnvilInitializationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWinAnvilInitializationSettings);
UClass* Z_Construct_UClass_UAkWinAnvilInitializationSettings_NoRegister()
{
	return UAkWinAnvilInitializationSettings::StaticClass();
}
struct Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWinAnvilInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkWinGDKInitializationSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::ClassParams = {
	&UAkWinAnvilInitializationSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkWinAnvilInitializationSettings()
{
	if (!Z_Registration_Info_UClass_UAkWinAnvilInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWinAnvilInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWinAnvilInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkWinAnvilInitializationSettings>()
{
	return UAkWinAnvilInitializationSettings::StaticClass();
}
UAkWinAnvilInitializationSettings::UAkWinAnvilInitializationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWinAnvilInitializationSettings);
UAkWinAnvilInitializationSettings::~UAkWinAnvilInitializationSettings() {}
// End Class UAkWinAnvilInitializationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkWinGDKAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkWinGDKAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWinGDKAdvancedInitializationSettings), 1359137900U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkWinGDKInitializationSettings, UAkWinGDKInitializationSettings::StaticClass, TEXT("UAkWinGDKInitializationSettings"), &Z_Registration_Info_UClass_UAkWinGDKInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWinGDKInitializationSettings), 780298447U) },
		{ Z_Construct_UClass_UAkWinAnvilInitializationSettings, UAkWinAnvilInitializationSettings::StaticClass, TEXT("UAkWinAnvilInitializationSettings"), &Z_Registration_Info_UClass_UAkWinAnvilInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWinAnvilInitializationSettings), 2004774147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_2435539751(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
