// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuickAssetAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERMANAGER_QuickAssetAction_generated_h
#error "QuickAssetAction.generated.h already included, missing '#pragma once' in QuickAssetAction.h"
#endif
#define SUPERMANAGER_QuickAssetAction_generated_h

#define FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDuplicateAssets); \
	DECLARE_FUNCTION(execTestFunc);


#define FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuickAssetAction(); \
	friend struct Z_Construct_UClass_UQuickAssetAction_Statics; \
public: \
	DECLARE_CLASS(UQuickAssetAction, UAssetActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SuperManager"), NO_API) \
	DECLARE_SERIALIZER(UQuickAssetAction)


#define FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuickAssetAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuickAssetAction(UQuickAssetAction&&); \
	UQuickAssetAction(const UQuickAssetAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuickAssetAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuickAssetAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuickAssetAction) \
	NO_API virtual ~UQuickAssetAction();


#define FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_12_PROLOG
#define FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERMANAGER_API UClass* StaticClass<class UQuickAssetAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
