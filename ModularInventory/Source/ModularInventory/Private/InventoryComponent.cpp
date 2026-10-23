#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"

//is a network - replicated actor component designed to manage a player's or actor's inventory system in a multiplayer environment.
//It handles adding items, stacking quantities, removing items by a unique identifier(FGuid), and synchronizing those changes securely from the server to clients while triggering UI updates.

UInventoryComponent::UInventoryComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(true);
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

   
    DOREPLIFETIME(UInventoryComponent, InventoryArray);
}

void UInventoryComponent::ServerAddItem_Implementation(FName ItemID, int32 Quantity)
{
    if (ItemID.IsNone() || Quantity <= 0) return;

   
    for (FInventoryItem& Item : InventoryArray.Items)
    {
        if (Item.ItemID == ItemID)
        {
            Item.Quantity += Quantity;
            InventoryArray.MarkItemDirty(Item);
            OnRep_Items();
            return;
        }
    }

  
    if (InventoryArray.Items.Num() < MaxCapacity)
    {
        FInventoryItem NewItem(ItemID, Quantity);
        InventoryArray.Items.Add(NewItem);
        InventoryArray.MarkItemDirty(NewItem);
        OnRep_Items(); 
    }
}

void UInventoryComponent::ServerRemoveItem_Implementation(FGuid ItemGuid, int32 Quantity)
{
    for (int32 i = InventoryArray.Items.Num() - 1; i >= 0; --i)
    {
        if (InventoryArray.Items[i].ItemGuid == ItemGuid)
        {
            InventoryArray.Items[i].Quantity -= Quantity;

            if (InventoryArray.Items[i].Quantity <= 0)
            {
                InventoryArray.Items.RemoveAt(i);
            }
            else
            {
                InventoryArray.MarkItemDirty(InventoryArray.Items[i]);
            }

            OnRep_Items();
            break;
        }
    }
}

void UInventoryComponent::OnRep_Items()
{
    OnInventoryUpdated.Broadcast();
}