// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HuaweiWall/InteractionState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HUAWEIWALL_API UClass* Z_Construct_UClass_AInteractionState();
HUAWEIWALL_API UClass* Z_Construct_UClass_AInteractionState_NoRegister();
UPackage* Z_Construct_UPackage__Script_HuaweiWall();
// End Cross Module References

// Begin Class AInteractionState
void AInteractionState::StaticRegisterNativesAInteractionState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractionState);
UClass* Z_Construct_UClass_AInteractionState_NoRegister()
{
	return AInteractionState::StaticClass();
}
struct Z_Construct_UClass_AInteractionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionState.h" },
		{ "ModuleRelativePath", "InteractionState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInteractionState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HuaweiWall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionState_Statics::ClassParams = {
	&AInteractionState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionState_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractionState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractionState()
{
	if (!Z_Registration_Info_UClass_AInteractionState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionState.OuterSingleton, Z_Construct_UClass_AInteractionState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractionState.OuterSingleton;
}
template<> HUAWEIWALL_API UClass* StaticClass<AInteractionState>()
{
	return AInteractionState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionState);
AInteractionState::~AInteractionState() {}
// End Class AInteractionState

// Begin Registration
struct Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_InteractionState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionState, AInteractionState::StaticClass, TEXT("AInteractionState"), &Z_Registration_Info_UClass_AInteractionState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionState), 596597284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_InteractionState_h_3569934675(TEXT("/Script/HuaweiWall"),
	Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_InteractionState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_InteractionState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
