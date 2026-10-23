// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemDataAsset.h"

#ifdef INVENTORY_ItemDataAsset_generated_h
#error "ItemDataAsset.generated.h already included, missing '#pragma once' in ItemDataAsset.h"
#endif
#define INVENTORY_ItemDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FItemStatistics ***************************************************
struct Z_Construct_UScriptStruct_FItemStatistics_Statics;
#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_ItemDataAsset_h_10_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FItemStatistics_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


struct FItemStatistics;
// ********** End ScriptStruct FItemStatistics *****************************************************

// ********** Begin Class UItemDataAsset ***********************************************************
struct Z_Construct_UClass_UItemDataAsset_Statics;
INVENTORY_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();

#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_ItemDataAsset_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemDataAsset(); \
	friend struct ::Z_Construct_UClass_UItemDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* ::Z_Construct_UClass_UItemDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UItemDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UItemDataAsset)


#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_ItemDataAsset_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemDataAsset(UItemDataAsset&&) = delete; \
	UItemDataAsset(const UItemDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemDataAsset) \
	NO_API virtual ~UItemDataAsset();


#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_ItemDataAsset_h_25_PROLOG
#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_ItemDataAsset_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_ItemDataAsset_h_28_INCLASS_NO_PURE_DECLS \
	FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_ItemDataAsset_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemDataAsset;

// ********** End Class UItemDataAsset *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_ItemDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
