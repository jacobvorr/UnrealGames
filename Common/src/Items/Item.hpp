class Item
{
    public:
        Item();
        Item(int maxStacks, int * itemDimensions);
        Item(int itemID, int maxStacks, int * itemDimensions);
        virtual ~Item();

        bool Consume();
        bool Consume(int amount);
        bool Add();
        bool Add(int amount);

        void SetMaxStackSize(int size);
        void SetCurrentStacks(int size);
        void SetItemDimensions(int xDimension, int yDimension);
        void SetItemID(int i);
        void SetItemPosition(int * pos);

        int GetMaxStackSize() const;
        int GetCurrentStacks() const;
        const int * GetItemDimensions() const;
        int * GetItemDimensions();
        int GetItemID() const;
        const int * GetItemPosition() const;

    private:
        int id;
        int maxStackSize;
        int stackSize;
        int dimensions[2];
        int position[2];
};
