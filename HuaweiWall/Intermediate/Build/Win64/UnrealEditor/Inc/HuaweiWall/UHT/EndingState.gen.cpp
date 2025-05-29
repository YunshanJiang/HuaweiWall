// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HuaweiWall/EndingState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndingState() {}

// Begin Cross Module References
HUAWEIWALL_API UClass* Z_Construct_UClass_ABaseState();
HUAWEIWALL_API UClass* Z_Construct_UClass_AEndingState();
HUAWEIWALL_API UClass* Z_Construct_UClass_AEndingState_NoRegister();
UPackage* Z_Construct_UPackage__Script_HuaweiWall();
// End Cross Module References

// Begin Class AEndingState
void AEndingState::StaticRegisterNativesAEndingState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEndingState);
UClass* Z_Construct_UClass_AEndingState_NoRegister()
{
	return AEndingState::StaticClass();
}
struct Z_Construct_UClass_AEndingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EndingState.h" },
		{ "ModuleRelativePath", "EndingState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndingState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEndingState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseState,
	(UObject* (*)())Z_Construct_UPackage__Script_HuaweiWall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEndingState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEndingState_Statics::ClassParams = {
	&AEndingState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEndingState_Statics::Class_MetaDataParams), Z_Construct_UClass_AEndingState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEndingState()
{
	if (!Z_Registration_Info_UClass_AEndingState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEndingState.OuterSingleton, Z_Construct_UClass_AEndingState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEndingState.OuterSingleton;
}
template<> HUAWEIWALL_API UClass* StaticClass<AEndingState>()
{
	return AEndingState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEndingState);
AEndingState::~AEndingState() {}
// End Class AEndingState

// Begin Registration
struct Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_EndingState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEndingState, AEndingState::StaticClass, TEXT("AEndingState"), &Z_Registration_Info_UClass_AEndingState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEndingState), 2234377913U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_EndingState_h_821459502(TEXT("/Script/HuaweiWall"),
	Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_EndingState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_EndingState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
