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



#endif /* Queue_h */
