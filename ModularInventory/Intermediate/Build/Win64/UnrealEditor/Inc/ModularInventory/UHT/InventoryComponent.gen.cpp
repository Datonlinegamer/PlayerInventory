// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryComponent.h"
#include "InventoryItemTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent();
MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
MODULARINVENTORY_API UFunction* Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature();
MODULARINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
MODULARINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemArray();
UPackage* Z_Construct_UPackage__Script_ModularInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnInventoryUpdatedSignature ******************************************
struct Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnInventoryUpdatedSignature constinit property declarations **********
// ********** End Delegate FOnInventoryUpdatedSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ModularInventory, nullptr, "OnInventoryUpdatedSignature__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdatedSignature)
{
	OnInventoryUpdatedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInventoryUpdatedSignature ********************************************

// ********** Begin Class UInventoryComponent Function GetItems ************************************
struct Z_Construct_UFunction_UInventoryComponent_GetItems_Statics
{
	struct InventoryComponent_eventGetItems_Parms
	{
		TArray<FInventoryItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter for UI or gameplay logic\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for UI or gameplay logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItems constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItems constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItems Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 1789776951
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1789776951
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers) < 2048);
// ********** End Function GetItems Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItems", 	Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::InventoryComponent_eventGetItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::InventoryComponent_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryItem>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function GetItems **************************************

// ********** Begin Class UInventoryComponent Function OnRep_Items *********************************
struct Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Items constinit property declarations ***************************
// ********** End Function OnRep_Items constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_Items", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_Items()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execOnRep_Items)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Items();
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function OnRep_Items ***********************************

// ********** Begin Class UInventoryComponent Function ServerAddItem *******************************
struct InventoryComponent_eventServerAddItem_Parms
{
	FName ItemID;
	int32 Quantity;
};
static FName NAME_UInventoryComponent_ServerAddItem = FName(TEXT("ServerAddItem"));
void UInventoryComponent::ServerAddItem(FName ItemID, int32 Quantity)
{
	InventoryComponent_eventServerAddItem_Parms Parms;
	Parms.ItemID=ItemID;
	Parms.Quantity=Quantity;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_ServerAddItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server-side RPC to add items securely on the server\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server-side RPC to add items securely on the server" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ServerAddItem constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerAddItem constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerAddItem Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServerAddItem_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServerAddItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::PropPointers) < 2048);
// ********** End Function ServerAddItem Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerAddItem", 	Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::PropPointers), 
sizeof(InventoryComponent_eventServerAddItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventoryComponent_eventServerAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_ServerAddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execServerAddItem)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerAddItem_Implementation(Z_Param_ItemID,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function ServerAddItem *********************************

// ********** Begin Class UInventoryComponent Function ServerRemoveItem ****************************
struct InventoryComponent_eventServerRemoveItem_Parms
{
	FGuid ItemGuid;
	int32 Quantity;
};
static FName NAME_UInventoryComponent_ServerRemoveItem = FName(TEXT("ServerRemoveItem"));
void UInventoryComponent::ServerRemoveItem(FGuid ItemGuid, int32 Quantity)
{
	InventoryComponent_eventServerRemoveItem_Parms Parms;
	Parms.ItemGuid=ItemGuid;
	Parms.Quantity=Quantity;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_ServerRemoveItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server-side RPC to remove or drop items\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server-side RPC to remove or drop items" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRemoveItem constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRemoveItem constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRemoveItem Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::NewProp_ItemGuid = { "ItemGuid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServerRemoveItem_Parms, ItemGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServerRemoveItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::NewProp_ItemGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers) < 2048);
// ********** End Function ServerRemoveItem Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerRemoveItem", 	Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers), 
sizeof(InventoryComponent_eventServerRemoveItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventoryComponent_eventServerRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execServerRemoveItem)
{
	P_GET_STRUCT(FGuid,Z_Param_ItemGuid);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRemoveItem_Implementation(Z_Param_ItemGuid,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function ServerRemoveItem ******************************

// ********** Begin Class UInventoryComponent ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryComponent;
UClass* UInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UInventoryComponent;
	if (!Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InventoryComponent"),
			Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton,
			StaticRegisterNativesUInventoryComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[] = {
		{ "Category", "Inventory|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate broadcasted whenever the inventory changes (for UI to update)\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate broadcasted whenever the inventory changes (for UI to update)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryArray_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCapacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInventoryComponent constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCapacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInventoryComponent constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetItems"), .Pointer = &UInventoryComponent::execGetItems },
		{ .NameUTF8 = UTF8TEXT("OnRep_Items"), .Pointer = &UInventoryComponent::execOnRep_Items },
		{ .NameUTF8 = UTF8TEXT("ServerAddItem"), .Pointer = &UInventoryComponent::execServerAddItem },
		{ .NameUTF8 = UTF8TEXT("ServerRemoveItem"), .Pointer = &UInventoryComponent::execServerRemoveItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_GetItems, "GetItems" }, // 1716792420
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_Items, "OnRep_Items" }, // 3785696542
		{ &Z_Construct_UFunction_UInventoryComponent_ServerAddItem, "ServerAddItem" }, // 2824832255
		{ &Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem, "ServerRemoveItem" }, // 1506198693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInventoryComponent_Statics

// ********** Begin Class UInventoryComponent Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdated_MetaData), NewProp_OnInventoryUpdated_MetaData) }; // 3002184145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryArray = { "InventoryArray", "OnRep_Items", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryArray), Z_Construct_UScriptStruct_FInventoryItemArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryArray_MetaData), NewProp_InventoryArray_MetaData) }; // 1356588301
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_MaxCapacity = { "MaxCapacity", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, MaxCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCapacity_MetaData), NewProp_MaxCapacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_MaxCapacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
// ********** End Class UInventoryComponent Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInventoryComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_InventoryArray(TEXT("InventoryArray"));
	const bool bIsValid = true
		&& Name_InventoryArray == ClassReps[(int32)ENetFields_Private::InventoryArray].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// ********** End Class UInventoryComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h__Script_ModularInventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 4232188106U) },
	};
}; // Z_CompiledInDeferFile_FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h__Script_ModularInventory_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h__Script_ModularInventory_809105118{
	TEXT("/Script/ModularInventory"),
	Z_CompiledInDeferFile_FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h__Script_ModularInventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Inventory_Plugins_ModularInventory_Source_ModularInventory_Public_InventoryComponent_h__Script_ModularInventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
