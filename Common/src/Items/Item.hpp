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
        void SetDimensions(int xDimension, int yDimension);
        void SetID(int i);
        void SetPosition(int xPos, int yPos);

        int GetMaxStackSize() const;
        int GetCurrentStacks() const;
        const int * GetDimensions() const;
        int * GetDimensions();
        int GetID() const;
        const int * GetPosition() const;

    private:
        int id;
        int maxStackSize;
        int stackSize;
        int dimensions[2];
        int position[2];
};
