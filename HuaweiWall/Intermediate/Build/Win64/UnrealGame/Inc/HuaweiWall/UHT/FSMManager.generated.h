// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FSMManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HUAWEIWALL_FSMManager_generated_h
#error "FSMManager.generated.h already included, missing '#pragma once' in FSMManager.h"
#endif
#define HUAWEIWALL_FSMManager_generated_h

#define FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFSMManager(); \
	friend struct Z_Construct_UClass_AFSMManager_Statics; \
public: \
	DECLARE_CLASS(AFSMManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HuaweiWall"), NO_API) \
	DECLARE_SERIALIZER(AFSMManager)


#define FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFSMManager(AFSMManager&&); \
	AFSMManager(const AFSMManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFSMManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFSMManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFSMManager) \
	NO_API virtual ~AFSMManager();


#define FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_20_PROLOG
#define FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_23_INCLASS_NO_PURE_DECLS \
	FID_HuaweiWall_Source_HuaweiWall_FSMManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HUAWEIWALL_API UClass* StaticClass<class AFSMManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HuaweiWall_Source_HuaweiWall_FSMManager_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::Intro) \
	op(EGameState::Interaction) \
	op(EGameState::Ending) 

enum class EGameState : uint8;
template<> struct TIsUEnumClass<EGameState> { enum { Value = true }; };
template<> HUAWEIWALL_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
