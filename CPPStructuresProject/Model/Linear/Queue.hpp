//
//  Queue.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "LinkedList.hpp"
#include <iostream>>
using namespace std;

template<class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    // Queue Methods
    void enqueue(Type data)
    Type dequeue();
    Type peek();
    void clear();
    
    // Overridden LinkedList Items
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
};

template <class Type>
Queue<Type> :: Queue() : LinkedList<Type>()
{
    // Empty because it is handled by the parent class constructor
}

template<class Type>
Queue<Type> :: ~Queue()
{
    for(LinearNode<Type> * removed = this-> front; removed != nullprt; removed = this->front)
    {
        this->front = removed->getNextNode();
        delete removed;
    }
}

template<class Type>
void Queue<Type> :: enqueue(Type item)
{
    LinearNode<Type> * added = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = added;
    }
    else
    {
        this->end->setNextNode(added);
    }
    this->end = added;
    this->size++;
}

template<class Type>
void Queue<Type> :: addAtIndex(int index, Type item)
{
    assert(index == this->size);
    enqueue(item);
}

template <class Type>
void Queue<Type> :: add(Type item)
{
    enqueue(item);
}



#endif /* Queue_h */
