// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HuaweiWall/BaseState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HUAWEIWALL_API UClass* Z_Construct_UClass_ABaseState();
HUAWEIWALL_API UClass* Z_Construct_UClass_ABaseState_NoRegister();
HUAWEIWALL_API UClass* Z_Construct_UClass_AFSMManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_HuaweiWall();
// End Cross Module References

// Begin Class ABaseState
void ABaseState::StaticRegisterNativesABaseState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseState);
UClass* Z_Construct_UClass_ABaseState_NoRegister()
{
	return ABaseState::StaticClass();
}
struct Z_Construct_UClass_ABaseState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseState.h" },
		{ "ModuleRelativePath", "BaseState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FSMManager_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "BaseState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FSMManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseState_Statics::NewProp_FSMManager = { "FSMManager", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseState, FSMManager), Z_Construct_UClass_AFSMManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FSMManager_MetaData), NewProp_FSMManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseState_Statics::NewProp_FSMManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HuaweiWall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseState_Statics::ClassParams = {
	&ABaseState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseState_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseState()
{
	if (!Z_Registration_Info_UClass_ABaseState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseState.OuterSingleton, Z_Construct_UClass_ABaseState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseState.OuterSingleton;
}
template<> HUAWEIWALL_API UClass* StaticClass<ABaseState>()
{
	return ABaseState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseState);
ABaseState::~ABaseState() {}
// End Class ABaseState

// Begin Registration
struct Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_BaseState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseState, ABaseState::StaticClass, TEXT("ABaseState"), &Z_Registration_Info_UClass_ABaseState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseState), 346924154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_BaseState_h_3369084533(TEXT("/Script/HuaweiWall"),
	Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_BaseState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_BaseState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
