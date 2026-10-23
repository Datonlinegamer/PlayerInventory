// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularInventory_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	MODULARINVENTORY_API UFunction* Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModularInventory;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModularInventory()
	{
		if (!Z_Registration_Info_UPackage__Script_ModularInventory.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_ModularInventory_OnInventoryUpdatedSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ModularInventory",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xB061EACE,
			0x19E44085,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModularInventory.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ModularInventory.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModularInventory(Z_Construct_UPackage__Script_ModularInventory, TEXT("/Script/ModularInventory"), Z_Registration_Info_UPackage__Script_ModularInventory, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB061EACE, 0x19E44085));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
