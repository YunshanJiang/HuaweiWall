// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HuaweiWall/IntroState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HUAWEIWALL_API UClass* Z_Construct_UClass_AIntroState();
HUAWEIWALL_API UClass* Z_Construct_UClass_AIntroState_NoRegister();
UPackage* Z_Construct_UPackage__Script_HuaweiWall();
// End Cross Module References

// Begin Class AIntroState
void AIntroState::StaticRegisterNativesAIntroState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIntroState);
UClass* Z_Construct_UClass_AIntroState_NoRegister()
{
	return AIntroState::StaticClass();
}
struct Z_Construct_UClass_AIntroState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IntroState.h" },
		{ "ModuleRelativePath", "IntroState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIntroState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HuaweiWall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroState_Statics::ClassParams = {
	&AIntroState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroState_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIntroState()
{
	if (!Z_Registration_Info_UClass_AIntroState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroState.OuterSingleton, Z_Construct_UClass_AIntroState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIntroState.OuterSingleton;
}
template<> HUAWEIWALL_API UClass* StaticClass<AIntroState>()
{
	return AIntroState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroState);
AIntroState::~AIntroState() {}
// End Class AIntroState

// Begin Registration
struct Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_IntroState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIntroState, AIntroState::StaticClass, TEXT("AIntroState"), &Z_Registration_Info_UClass_AIntroState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroState), 1462612537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_IntroState_h_2893260960(TEXT("/Script/HuaweiWall"),
	Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_IntroState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_IntroState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
