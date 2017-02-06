class Item
{
    public:
        Item();
        Item(int maxStacks, int * itemDimensions);
        virtual ~Item();

        bool Consume();
        bool Consume(int amount);
        bool Add(int amount);

        void SetMaxStackSize(int size);
        void SetCurrentStacks(int size);
        void SetItemDimensions(int xDimension, int yDimension);

        int GetMaxStackSize() const;
        int GetCurrentStacks() const;
        const int * GetItemDimensions() const;
        int * GetItemDimensions();

    private:
        int maxStackSize;
        int stackSize;
        int itemDimensions[2];
};
