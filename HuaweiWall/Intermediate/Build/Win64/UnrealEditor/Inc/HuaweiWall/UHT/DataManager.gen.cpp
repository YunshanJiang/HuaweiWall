// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HuaweiWall/DataManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HUAWEIWALL_API UClass* Z_Construct_UClass_ADataManager();
HUAWEIWALL_API UClass* Z_Construct_UClass_ADataManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_HuaweiWall();
// End Cross Module References

// Begin Class ADataManager Function GetAPI
struct Z_Construct_UFunction_ADataManager_GetAPI_Statics
{
	struct DataManager_eventGetAPI_Parms
	{
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "APILinkF" },
		{ "ModuleRelativePath", "DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADataManager_GetAPI_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManager_eventGetAPI_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADataManager_GetAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataManager_eventGetAPI_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADataManager_GetAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataManager_GetAPI_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataManager_GetAPI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetAPI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_GetAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "GetAPI", nullptr, nullptr, Z_Construct_UFunction_ADataManager_GetAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetAPI_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataManager_GetAPI_Statics::DataManager_eventGetAPI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_GetAPI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_GetAPI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADataManager_GetAPI_Statics::DataManager_eventGetAPI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADataManager_GetAPI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_GetAPI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execGetAPI)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAPI(Z_Param_Key);
	P_NATIVE_END;
}
// End Class ADataManager Function GetAPI

// Begin Class ADataManager Function LoadData
struct Z_Construct_UFunction_ADataManager_LoadData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "APILinkF" },
		{ "ModuleRelativePath", "DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataManager_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataManager, nullptr, "LoadData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataManager_LoadData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataManager_LoadData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADataManager_LoadData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataManager_LoadData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataManager::execLoadData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadData();
	P_NATIVE_END;
}
// End Class ADataManager Function LoadData

// Begin Class ADataManager
void ADataManager::StaticRegisterNativesADataManager()
{
	UClass* Class = ADataManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAPI", &ADataManager::execGetAPI },
		{ "LoadData", &ADataManager::execLoadData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADataManager);
UClass* Z_Construct_UClass_ADataManager_NoRegister()
{
	return ADataManager::StaticClass();
}
struct Z_Construct_UClass_ADataManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataManager.h" },
		{ "ModuleRelativePath", "DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_APIMap_MetaData[] = {
		{ "Category", "APILink" },
		{ "ModuleRelativePath", "DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowWidth_MetaData[] = {
		{ "Category", "DataManager" },
		{ "ModuleRelativePath", "DataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowHeight_MetaData[] = {
		{ "Category", "DataManager" },
		{ "ModuleRelativePath", "DataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_APIMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_APIMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_APIMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WindowWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WindowHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADataManager_GetAPI, "GetAPI" }, // 91014983
		{ &Z_Construct_UFunction_ADataManager_LoadData, "LoadData" }, // 1925709079
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADataManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_APIMap_ValueProp = { "APIMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_APIMap_Key_KeyProp = { "APIMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_APIMap = { "APIMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, APIMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_APIMap_MetaData), NewProp_APIMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_WindowWidth = { "WindowWidth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, WindowWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowWidth_MetaData), NewProp_WindowWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADataManager_Statics::NewProp_WindowHeight = { "WindowHeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataManager, WindowHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowHeight_MetaData), NewProp_WindowHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADataManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_APIMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_APIMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_APIMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_WindowWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataManager_Statics::NewProp_WindowHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADataManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADataManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HuaweiWall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADataManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADataManager_Statics::ClassParams = {
	&ADataManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADataManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADataManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADataManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADataManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADataManager()
{
	if (!Z_Registration_Info_UClass_ADataManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADataManager.OuterSingleton, Z_Construct_UClass_ADataManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADataManager.OuterSingleton;
}
template<> HUAWEIWALL_API UClass* StaticClass<ADataManager>()
{
	return ADataManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADataManager);
ADataManager::~ADataManager() {}
// End Class ADataManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_DataManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADataManager, ADataManager::StaticClass, TEXT("ADataManager"), &Z_Registration_Info_UClass_ADataManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADataManager), 32593769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_DataManager_h_2431214254(TEXT("/Script/HuaweiWall"),
	Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_DataManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HuaweiWall_Source_HuaweiWall_DataManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
