#include "Item.hpp"

Item::Item()
{
}

Item::Item(int maxStacks, int * itemDimensions)
{
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

void Item::SetItemDimensions(int xDimension, int yDimension)
{
    itemDimensions[0] = xDimension;
    itemDimensions[1] = yDimension;
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
    return itemDimensions;
}

int * Item::GetItemDimensions()
{
    return itemDimensions;
}
