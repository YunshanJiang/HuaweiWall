// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HUAWEIWALL_DataManager_generated_h
#error "DataManager.generated.h already included, missing '#pragma once' in DataManager.h"
#endif
#define HUAWEIWALL_DataManager_generated_h

#define FID_HuaweiWall_Source_HuaweiWall_DataManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAPI); \
	DECLARE_FUNCTION(execLoadData);


#define FID_HuaweiWall_Source_HuaweiWall_DataManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADataManager(); \
	friend struct Z_Construct_UClass_ADataManager_Statics; \
public: \
	DECLARE_CLASS(ADataManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HuaweiWall"), NO_API) \
	DECLARE_SERIALIZER(ADataManager)


#define FID_HuaweiWall_Source_HuaweiWall_DataManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADataManager(ADataManager&&); \
	ADataManager(const ADataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADataManager) \
	NO_API virtual ~ADataManager();


#define FID_HuaweiWall_Source_HuaweiWall_DataManager_h_9_PROLOG
#define FID_HuaweiWall_Source_HuaweiWall_DataManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HuaweiWall_Source_HuaweiWall_DataManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HuaweiWall_Source_HuaweiWall_DataManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_HuaweiWall_Source_HuaweiWall_DataManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HUAWEIWALL_API UClass* StaticClass<class ADataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HuaweiWall_Source_HuaweiWall_DataManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
