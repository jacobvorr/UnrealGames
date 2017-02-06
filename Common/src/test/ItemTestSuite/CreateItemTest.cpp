#include <iostream>

#include "../../Item.hpp"

bool test_CreateItem();

int main()
{
    if (test_CreateItem())
    {
        std::cout << "Test Result: Create Item: Pass" << std::endl;
    }
    else
    {
        std::cout << "Test Result: Create Item: Fail" << std::endl;
    }
}

bool test_CreateItem()
{
    Item potion;
    int potionDimensions[2] = {3, 2};
    potion = Item(256, potionDimensions);
    std::cout << "Test: Max Stacks: " << potion.GetMaxStackSize() << " == 256" << std::endl;
    std::cout << "Test: Stacks: " << potion.GetCurrentStacks() << " == 0" << std::endl;
    std::cout << "Test: Item Dimensions: " << potion.GetItemDimensions()[0] << ", "
        << potion.GetItemDimensions()[1]  << " == " << potionDimensions[0] << ", " << potionDimensions[1] << std::endl;
    return (potion.GetMaxStackSize() == 256 && potion.GetCurrentStacks() == 0 &&
        potion.GetItemDimensions()[0] == potionDimensions[0] && potion.GetItemDimensions()[1] == potionDimensions[1]);
}
