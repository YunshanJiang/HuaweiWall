// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HuaweiWall/FSMManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSMManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HUAWEIWALL_API UClass* Z_Construct_UClass_AFSMManager();
HUAWEIWALL_API UClass* Z_Construct_UClass_AFSMManager_NoRegister();
HUAWEIWALL_API UEnum* Z_Construct_UEnum_HuaweiWall_EGameState();
UPackage* Z_Construct_UPackage__Script_HuaweiWall();
// End Cross Module References

// Begin Enum EGameState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameState;
static UEnum* EGameState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HuaweiWall_EGameState, (UObject*)Z_Construct_UPackage__Script_HuaweiWall(), TEXT("EGameState"));
	}
	return Z_Registration_Info_UEnum_EGameState.OuterSingleton;
}
template<> HUAWEIWALL_API UEnum* StaticEnum<EGameState>()
{
	return EGameState_StaticEnum();
}
struct Z_Construct_UEnum_HuaweiWall_EGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ending.Name", "EGameState::Ending" },
		{ "Interaction.Name", "EGameState::Interaction" },
		{ "Intro.Name", "EGameState::Intro" },
		{ "ModuleRelativePath", "FSMManager.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameState::Intro", (int64)EGameState::Intro },
		{ "EGameState::Interaction", (int64)EGameState::Interaction },
		{ "EGameState::Ending", (int64)EGameState::Ending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HuaweiWall_EGameState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HuaweiWall,
	nullptr,
	"EGameState",
	"EGameState",
	Z_Construct_UEnum_HuaweiWall_EGameState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HuaweiWall_EGameState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HuaweiWall_EGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HuaweiWall_EGameState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HuaweiWall_EGameState()
{
	if (!Z_Registration_Info_UEnum_EGameState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameState.InnerSingleton, Z_Construct_UEnum_HuaweiWall_EGameState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameState.InnerSingleton;
}
// End Enum EGameState

// Begin Class AFSMManager
void AFSMManager::StaticRegisterNativesAFSMManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFSMManager);
UClass* Z_Construct_UClass_AFSMManager_NoRegister()
{
	return AFSMManager::StaticClass();
}
struct Z_Construct_UClass_AFSMManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FSMManager.h" },
		{ "ModuleRelativePath", "FSMManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "FSMManager" },
		{ "ModuleRelativePath", "FSMManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFSMManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFSMManager_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFSMManager_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFSMManager, CurrentState), Z_Construct_UEnum_HuaweiWall_EGameState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 1714590625
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFSMManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFSMManager_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFSMManager_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFSMManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFSMManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HuaweiWall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFSMManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFSMManager_Statics::ClassParams = {
	&AFSMManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFSMManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFSMManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFSMManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFSMManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFSMManager()
{
	if (!Z_Registration_Info_UClass_AFSMManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFSMManager.OuterSingleton, Z_Construct_UClass_AFSMManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFSMManager.OuterSingleton;
}
template<> HUAWEIWALL_API UClass* StaticClass<AFSMManager>()
{
	return AFSMManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFSMManager);
AFSMManager::~AFSMManager() {}
// End Class AFSMManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameState_StaticEnum, TEXT("EGameState"), &Z_Registration_Info_UEnum_EGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1714590625U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFSMManager, AFSMManager::StaticClass, TEXT("AFSMManager"), &Z_Registration_Info_UClass_AFSMManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFSMManager), 1108630722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_1557766351(TEXT("/Script/HuaweiWall"),
	Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
