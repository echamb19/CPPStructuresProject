//
//  LinkedList.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "List.hpp"

using namespace std;    // Used for keyword access.
// ^ It makes sure My pointers are pointing to the right thing.

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
    
public:
    // Constructors
    LinkedList();
    // Destructor
    virtual ~LinkedList();  // Virtual so it can be overridden.
    // Helper Methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    // Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    type remove(int index);
//    Type setAtIndex(int index, Type item);
//    bool contains(Type item);
};

template <class Type>
LinkedList<Type> :: LinkedList()
{
    this->front = nullprt;
    this->end = nullprt;
    this->size = 0;
}

template<class Type>
LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullprt)
    {
        front = destroyStructure->getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}

template<class Type>
void LinkedList<Type> :: add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this-> size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->end = newData;
    
    this->size += 1;
}

template<class Type>
void LinkedList<Type> :: addAtIndexJ(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        if (index == 0)
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * prevous = nullptr;
            LinearNode<Type> * current = front;
            for (int position = 0; position < index; position++)
            {
                previous->setNextNode(toBeAdded);
                toBeAdded->setNextNode(current);
            }
        }
        this->size++;
    }
}



#endif /* LinkedList_h */
