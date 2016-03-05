/**
    Node.h
    Purpose: Defines Class Node
    @author Wall.Of.Death
    @version 0.1
    @since 2016-03-05
*/

#ifndef NODE_H
#define NODE_H


class Node {
    public:
        Node() {};
        ~Node() {};

        unsigned int getID() { return ID; }
        void setID(unsigned int val_) { ID = val_; }

    protected:

    private:
        unsigned int ID;
};

#endif // NODE_H
