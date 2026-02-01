// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWinGDKPlatformInfo() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinAnvilPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinAnvilPlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinGDKPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWinGDKPlatformInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkWinGDKPlatformInfo
void UAkWinGDKPlatformInfo::StaticRegisterNativesUAkWinGDKPlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWinGDKPlatformInfo);
UClass* Z_Construct_UClass_UAkWinGDKPlatformInfo_NoRegister()
{
	return UAkWinGDKPlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWinGDKPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::ClassParams = {
	&UAkWinGDKPlatformInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkWinGDKPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWinGDKPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWinGDKPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWinGDKPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWinGDKPlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkWinGDKPlatformInfo>()
{
	return UAkWinGDKPlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWinGDKPlatformInfo);
UAkWinGDKPlatformInfo::~UAkWinGDKPlatformInfo() {}
// End Class UAkWinGDKPlatformInfo

// Begin Class UAkWinAnvilPlatformInfo
void UAkWinAnvilPlatformInfo::StaticRegisterNativesUAkWinAnvilPlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWinAnvilPlatformInfo);
UClass* Z_Construct_UClass_UAkWinAnvilPlatformInfo_NoRegister()
{
	return UAkWinAnvilPlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKPlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWinAnvilPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkWinGDKPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::ClassParams = {
	&UAkWinAnvilPlatformInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkWinAnvilPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWinAnvilPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkWinAnvilPlatformInfo>()
{
	return UAkWinAnvilPlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWinAnvilPlatformInfo);
UAkWinAnvilPlatformInfo::~UAkWinAnvilPlatformInfo() {}
// End Class UAkWinAnvilPlatformInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKPlatformInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkWinGDKPlatformInfo, UAkWinGDKPlatformInfo::StaticClass, TEXT("UAkWinGDKPlatformInfo"), &Z_Registration_Info_UClass_UAkWinGDKPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWinGDKPlatformInfo), 4226915222U) },
		{ Z_Construct_UClass_UAkWinAnvilPlatformInfo, UAkWinAnvilPlatformInfo::StaticClass, TEXT("UAkWinAnvilPlatformInfo"), &Z_Registration_Info_UClass_UAkWinAnvilPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWinAnvilPlatformInfo), 277251001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKPlatformInfo_h_853423668(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKPlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mask_GGJ26_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKPlatformInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
