#pragma once

#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "InventoryItemTypes.generated.h"


struct FInventoryItemArray;


USTRUCT(BlueprintType)
struct MODULARINVENTORY_API FInventoryItem : public FFastArraySerializerItem
{
    GENERATED_BODY()

    FInventoryItem()
        : ItemGuid(FGuid::NewGuid())
        , ItemID(NAME_None)
        , Quantity(1)
        , Durability(100.0f)
    {
    }

    FInventoryItem(FName InItemID, int32 InQuantity = 1)
        : ItemGuid(FGuid::NewGuid())
        , ItemID(InItemID)
        , Quantity(InQuantity)
        , Durability(100.0f)
    {
    }

    UPROPERTY(BlueprintReadWrite, Category = "Inventory")
    FGuid ItemGuid;

    UPROPERTY(BlueprintReadWrite, Category = "Inventory")
    FName ItemID = NAME_None;

    UPROPERTY(BlueprintReadWrite, Category = "Inventory")
    int32 Quantity = 1;

    UPROPERTY(BlueprintReadWrite, Category = "Inventory")
    float Durability = 100.0f;


    void PreReplicatedRemove(const FInventoryItemArray& InArraySerializer);
    void PostReplicatedAdd(const FInventoryItemArray& InArraySerializer);
    void PostReplicatedChange(const FInventoryItemArray& InArraySerializer);
};


USTRUCT(BlueprintType)
struct MODULARINVENTORY_API FInventoryItemArray : public FFastArraySerializer
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "Inventory")
    TArray<FInventoryItem> Items;

    
    bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
    {
        return FastArrayDeltaSerialize<FInventoryItem, FInventoryItemArray>(Items, DeltaParms, *this);
    }
};

template<>
struct TStructOpsTypeTraits<FInventoryItemArray> : public TStructOpsTypeTraitsBase2<FInventoryItemArray>
{
    enum
    {
        WithNetDeltaSerializer = true
    };
};