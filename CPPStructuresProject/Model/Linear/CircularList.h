//
//  CircularList.h
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "../Nodes/DoubleNode.hpp"

template <class Type>
class CircularList : public DoubleNode<Type>
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    int size;
    
    DoubleNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    // List Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
};

template <class Type>
CircuularList<Type> :: CircularList()
{
    front = nullptr;
    end = nullptr;
    this->size = 0;
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNoode<Type> * current = front;
    while(this->front != nullptr && this->front != front->getNext())
    {
        front = front->getNext();
        delete current;
        current = front;
    }
    delete front;
}

template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    assert (index >= 0 && index < this->size);
    DoubleNode<Type> * nodeToFind;
    
    if (index < this->size / 2)
    {
        nodeToFine = this->front;
        for (int position = 0; position < index; position++)
        {
            nodeToFind = nodeToFind->getNext();
        }
    }
    else
    {
        nodeToFind = this->end;
        for (int position = this->size - 1; position > index; position--)
        {
            nodetoFind = nodeToFind->getPrevious();
        }
    }
    
    return nodeToFind;
}


#endif /* CircularList_h */
