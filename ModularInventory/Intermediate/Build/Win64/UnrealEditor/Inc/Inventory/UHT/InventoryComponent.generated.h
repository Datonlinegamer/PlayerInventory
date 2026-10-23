// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"

#ifdef INVENTORY_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define INVENTORY_InventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FInventoryItem;

// ********** Begin Delegate FOnInventoryUpdatedSignature ******************************************
#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_8_DELEGATE \
INVENTORY_API void FOnInventoryUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdatedSignature);


// ********** End Delegate FOnInventoryUpdatedSignature ********************************************

// ********** Begin Class UInventoryComponent ******************************************************
#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRemoveItem_Implementation(FGuid ItemGuid, int32 Quantity); \
	virtual void ServerAddItem_Implementation(FName ItemID, int32 Quantity); \
	DECLARE_FUNCTION(execOnRep_Items); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execServerRemoveItem); \
	DECLARE_FUNCTION(execServerAddItem);


#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInventoryComponent_Statics;
INVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();

#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct ::Z_Construct_UClass_UInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* ::Z_Construct_UClass_UInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryArray=NETFIELD_REP_START, \
		NETFIELD_REP_END=InventoryArray	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&) = delete; \
	UInventoryComponent(const UInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_10_PROLOG
#define FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_13_CALLBACK_WRAPPERS \
	FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryComponent;

// ********** End Class UInventoryComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
