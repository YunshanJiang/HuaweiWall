// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HuaweiWall/APIManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPIManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HUAWEIWALL_API UClass* Z_Construct_UClass_AAPIManager();
HUAWEIWALL_API UClass* Z_Construct_UClass_AAPIManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_HuaweiWall();
// End Cross Module References

// Begin Class AAPIManager
void AAPIManager::StaticRegisterNativesAAPIManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAPIManager);
UClass* Z_Construct_UClass_AAPIManager_NoRegister()
{
	return AAPIManager::StaticClass();
}
struct Z_Construct_UClass_AAPIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "APIManager.h" },
		{ "ModuleRelativePath", "APIManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAPIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HuaweiWall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPIManager_Statics::ClassParams = {
	&AAPIManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AAPIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAPIManager()
{
	if (!Z_Registration_Info_UClass_AAPIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPIManager.OuterSingleton, Z_Construct_UClass_AAPIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAPIManager.OuterSingleton;
}
template<> HUAWEIWALL_API UClass* StaticClass<AAPIManager>()
{
	return AAPIManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAPIManager);
AAPIManager::~AAPIManager() {}
// End Class AAPIManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_APIManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAPIManager, AAPIManager::StaticClass, TEXT("AAPIManager"), &Z_Registration_Info_UClass_AAPIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPIManager), 3904058939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_APIManager_h_2479659010(TEXT("/Script/HuaweiWall"),
	Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_APIManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_APIManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
