#ifndef ANT_H
#define ANT_H


class Ant
{
    public:
        Ant();
        virtual ~Ant();
        Ant(const Ant& other);
        Ant& operator=(const Ant& other);

        unsigned int GetID() { return ID; }
        void SetID(unsigned int val) { ID = val; }

    protected:

    private:
        unsigned int ID;
};

#endif // ANT_H
