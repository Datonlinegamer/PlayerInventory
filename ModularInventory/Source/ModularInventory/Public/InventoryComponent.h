#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryItemTypes.h"
#include "InventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdatedSignature);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MODULARINVENTORY_API UInventoryComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UInventoryComponent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Server, Reliable, Category = "Inventory")
    void ServerAddItem(FName ItemID, int32 Quantity);

  
    UFUNCTION(BlueprintCallable, Server, Reliable, Category = "Inventory")
    void ServerRemoveItem(FGuid ItemGuid, int32 Quantity);

    UPROPERTY(BlueprintAssignable, Category = "Inventory|Events")
    FOnInventoryUpdatedSignature OnInventoryUpdated;

    UFUNCTION(BlueprintPure, Category = "Inventory")
    const TArray<FInventoryItem>& GetItems() const { return InventoryArray.Items; }

protected:
    UPROPERTY(ReplicatedUsing = OnRep_Items, BlueprintReadOnly, Category = "Inventory")
    FInventoryItemArray InventoryArray;

    UFUNCTION()
    void OnRep_Items();

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory")
    int32 MaxCapacity = 20;
};