// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "APIManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HUAWEIWALL_APIManager_generated_h
#error "APIManager.generated.h already included, missing '#pragma once' in APIManager.h"
#endif
#define HUAWEIWALL_APIManager_generated_h

#define FID_HuaweiWall_Source_HuaweiWall_APIManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAPIManager(); \
	friend struct Z_Construct_UClass_AAPIManager_Statics; \
public: \
	DECLARE_CLASS(AAPIManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HuaweiWall"), NO_API) \
	DECLARE_SERIALIZER(AAPIManager)


#define FID_HuaweiWall_Source_HuaweiWall_APIManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAPIManager(AAPIManager&&); \
	AAPIManager(const AAPIManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAPIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAPIManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAPIManager) \
	NO_API virtual ~AAPIManager();


#define FID_HuaweiWall_Source_HuaweiWall_APIManager_h_9_PROLOG
#define FID_HuaweiWall_Source_HuaweiWall_APIManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HuaweiWall_Source_HuaweiWall_APIManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_HuaweiWall_Source_HuaweiWall_APIManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HUAWEIWALL_API UClass* StaticClass<class AAPIManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HuaweiWall_Source_HuaweiWall_APIManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
