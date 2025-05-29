// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WindowManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HUAWEIWALL_WindowManager_generated_h
#error "WindowManager.generated.h already included, missing '#pragma once' in WindowManager.h"
#endif
#define HUAWEIWALL_WindowManager_generated_h

#define FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWindowAlwaysOnTop);


#define FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWindowManager(); \
	friend struct Z_Construct_UClass_AWindowManager_Statics; \
public: \
	DECLARE_CLASS(AWindowManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HuaweiWall"), NO_API) \
	DECLARE_SERIALIZER(AWindowManager)


#define FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWindowManager(AWindowManager&&); \
	AWindowManager(const AWindowManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindowManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindowManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWindowManager) \
	NO_API virtual ~AWindowManager();


#define FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_9_PROLOG
#define FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_HuaweiWall_Source_HuaweiWall_WindowManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HUAWEIWALL_API UClass* StaticClass<class AWindowManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HuaweiWall_Source_HuaweiWall_WindowManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
