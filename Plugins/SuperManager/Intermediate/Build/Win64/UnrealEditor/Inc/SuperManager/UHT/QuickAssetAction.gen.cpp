// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperManager/Public/QuickAssetAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickAssetAction() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility();
SUPERMANAGER_API UClass* Z_Construct_UClass_UQuickAssetAction();
SUPERMANAGER_API UClass* Z_Construct_UClass_UQuickAssetAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_SuperManager();
// End Cross Module References

// Begin Class UQuickAssetAction Function DuplicateAssets
struct Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics
{
	struct QuickAssetAction_eventDuplicateAssets_Parms
	{
		int32 NumOfDuplicates;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa4\x8d\xe5\x88\xb6\xe8\xb5\x84\xe4\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/QuickAssetAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x8d\xe5\x88\xb6\xe8\xb5\x84\xe4\xba\xa7" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfDuplicates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::NewProp_NumOfDuplicates = { "NumOfDuplicates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuickAssetAction_eventDuplicateAssets_Parms, NumOfDuplicates), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::NewProp_NumOfDuplicates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickAssetAction, nullptr, "DuplicateAssets", nullptr, nullptr, Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::QuickAssetAction_eventDuplicateAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::QuickAssetAction_eventDuplicateAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickAssetAction::execDuplicateAssets)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumOfDuplicates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DuplicateAssets(Z_Param_NumOfDuplicates);
	P_NATIVE_END;
}
// End Class UQuickAssetAction Function DuplicateAssets

// Begin Class UQuickAssetAction Function TestFunc
struct Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/QuickAssetAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickAssetAction, nullptr, "TestFunc", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UQuickAssetAction_TestFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickAssetAction::execTestFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestFunc();
	P_NATIVE_END;
}
// End Class UQuickAssetAction Function TestFunc

// Begin Class UQuickAssetAction
void UQuickAssetAction::StaticRegisterNativesUQuickAssetAction()
{
	UClass* Class = UQuickAssetAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DuplicateAssets", &UQuickAssetAction::execDuplicateAssets },
		{ "TestFunc", &UQuickAssetAction::execTestFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuickAssetAction);
UClass* Z_Construct_UClass_UQuickAssetAction_NoRegister()
{
	return UQuickAssetAction::StaticClass();
}
struct Z_Construct_UClass_UQuickAssetAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "QuickAssetAction.h" },
		{ "ModuleRelativePath", "Public/QuickAssetAction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets, "DuplicateAssets" }, // 3941291797
		{ &Z_Construct_UFunction_UQuickAssetAction_TestFunc, "TestFunc" }, // 3851531046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickAssetAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuickAssetAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetActionUtility,
	(UObject* (*)())Z_Construct_UPackage__Script_SuperManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickAssetAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuickAssetAction_Statics::ClassParams = {
	&UQuickAssetAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickAssetAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuickAssetAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuickAssetAction()
{
	if (!Z_Registration_Info_UClass_UQuickAssetAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuickAssetAction.OuterSingleton, Z_Construct_UClass_UQuickAssetAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuickAssetAction.OuterSingleton;
}
template<> SUPERMANAGER_API UClass* StaticClass<UQuickAssetAction>()
{
	return UQuickAssetAction::StaticClass();
}
UQuickAssetAction::UQuickAssetAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickAssetAction);
UQuickAssetAction::~UQuickAssetAction() {}
// End Class UQuickAssetAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuickAssetAction, UQuickAssetAction::StaticClass, TEXT("UQuickAssetAction"), &Z_Registration_Info_UClass_UQuickAssetAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuickAssetAction), 2713713387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_1149252690(TEXT("/Script/SuperManager"),
	Z_CompiledInDeferFile_FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_ExtrenEditor_Plugins_SuperManager_Source_SuperManager_Public_QuickAssetAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
