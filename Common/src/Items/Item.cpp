#include "Item.hpp"
#define UNIDENTIFIED_ITEM 10000

Item::Item()
{
}

Item::Item(int maxStacks, int * itemDimensions)
{
    SetItemID(UNIDENTIFIED_ITEM);
    SetMaxStackSize(maxStacks);
    SetCurrentStacks(0);
    SetItemDimensions(itemDimensions[0], itemDimensions[1]);
}

Item::Item(int itemID, int maxStacks, int * itemDimensions)
{
    SetItemID(itemID);
    SetMaxStackSize(maxStacks);
    SetCurrentStacks(0);
    SetItemDimensions(itemDimensions[0], itemDimensions[1]);
}

Item::~Item()
{
}

bool Item::Consume()
{
    return Consume(1);
}

bool Item::Consume(int amount)
{
    int newStackSize = GetCurrentStacks() - amount;

    if (newStackSize < 0)
    {
        return false;
    }

    SetCurrentStacks(newStackSize);

    return true;
}

bool Item::Add()
{
    return Add(1);
}

bool Item::Add(int amount)
{
    int newStackSize = GetCurrentStacks() + amount;

    if (newStackSize > GetMaxStackSize())
    {
        return false;
    }

    SetCurrentStacks(newStackSize);

    return true;
}

void Item::SetMaxStackSize(int size)
{
    maxStackSize = size;
}

void Item::SetCurrentStacks(int size)
{
    stackSize = size;
}

void Item::SetID(int i)
{
    id = i;
}

void Item::SetDimensions(int xDimension, int yDimension)
{
    dimensions[0] = xDimension;
    dimensions[1] = yDimension;
}

void Item::SetItemPosition(int pos)
{
    position = pos;
}

int Item::GetMaxStackSize() const
{
    return maxStackSize;
}

int Item::GetCurrentStacks() const
{
    return stackSize;
}

const int * Item::GetItemDimensions() const
{
    return dimensions;
}

int * Item::GetItemDimensions()
{
    return dimensions;
}

int Item::GetItemID() const
{
    return id;
}

const int * Item::GetItemPosition() const
{
    return position;
}
