// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HuaweiWall/WindowManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HUAWEIWALL_API UClass* Z_Construct_UClass_AWindowManager();
HUAWEIWALL_API UClass* Z_Construct_UClass_AWindowManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_HuaweiWall();
// End Cross Module References

// Begin Class AWindowManager Function CheckWindowCondition
struct Z_Construct_UFunction_AWindowManager_CheckWindowCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowF" },
		{ "ModuleRelativePath", "WindowManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindowManager_CheckWindowCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindowManager, nullptr, "CheckWindowCondition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWindowManager_CheckWindowCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWindowManager_CheckWindowCondition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWindowManager_CheckWindowCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWindowManager_CheckWindowCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWindowManager::execCheckWindowCondition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckWindowCondition();
	P_NATIVE_END;
}
// End Class AWindowManager Function CheckWindowCondition

// Begin Class AWindowManager Function SetWindowAlwaysOnTop
struct Z_Construct_UFunction_AWindowManager_SetWindowAlwaysOnTop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowF" },
		{ "ModuleRelativePath", "WindowManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindowManager_SetWindowAlwaysOnTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindowManager, nullptr, "SetWindowAlwaysOnTop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWindowManager_SetWindowAlwaysOnTop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWindowManager_SetWindowAlwaysOnTop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWindowManager_SetWindowAlwaysOnTop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWindowManager_SetWindowAlwaysOnTop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWindowManager::execSetWindowAlwaysOnTop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWindowAlwaysOnTop();
	P_NATIVE_END;
}
// End Class AWindowManager Function SetWindowAlwaysOnTop

// Begin Class AWindowManager
void AWindowManager::StaticRegisterNativesAWindowManager()
{
	UClass* Class = AWindowManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckWindowCondition", &AWindowManager::execCheckWindowCondition },
		{ "SetWindowAlwaysOnTop", &AWindowManager::execSetWindowAlwaysOnTop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWindowManager);
UClass* Z_Construct_UClass_AWindowManager_NoRegister()
{
	return AWindowManager::StaticClass();
}
struct Z_Construct_UClass_AWindowManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WindowManager.h" },
		{ "ModuleRelativePath", "WindowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowWidth_MetaData[] = {
		{ "Category", "WindowManager" },
		{ "ModuleRelativePath", "WindowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowHeight_MetaData[] = {
		{ "Category", "WindowManager" },
		{ "ModuleRelativePath", "WindowManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WindowWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WindowHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWindowManager_CheckWindowCondition, "CheckWindowCondition" }, // 3668864475
		{ &Z_Construct_UFunction_AWindowManager_SetWindowAlwaysOnTop, "SetWindowAlwaysOnTop" }, // 1338937498
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindowManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWindowManager_Statics::NewProp_WindowWidth = { "WindowWidth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWindowManager, WindowWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowWidth_MetaData), NewProp_WindowWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWindowManager_Statics::NewProp_WindowHeight = { "WindowHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWindowManager, WindowHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowHeight_MetaData), NewProp_WindowHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWindowManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindowManager_Statics::NewProp_WindowWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindowManager_Statics::NewProp_WindowHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWindowManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWindowManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HuaweiWall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWindowManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWindowManager_Statics::ClassParams = {
	&AWindowManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWindowManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWindowManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWindowManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AWindowManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWindowManager()
{
	if (!Z_Registration_Info_UClass_AWindowManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWindowManager.OuterSingleton, Z_Construct_UClass_AWindowManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWindowManager.OuterSingleton;
}
template<> HUAWEIWALL_API UClass* StaticClass<AWindowManager>()
{
	return AWindowManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWindowManager);
AWindowManager::~AWindowManager() {}
// End Class AWindowManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWindowManager, AWindowManager::StaticClass, TEXT("AWindowManager"), &Z_Registration_Info_UClass_AWindowManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWindowManager), 4263324909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_149956274(TEXT("/Script/HuaweiWall"),
	Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
