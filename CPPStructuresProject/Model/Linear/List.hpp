//
//  ListStructure.h
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/4/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef ListStructure_h
#define ListStructure_h

#include <assert.h>
#include "../Nodes/LinearNode.hpp"

template <class Type>
class List
{
protected:
    int size;
public:
    //Structure / List Operations
    virtual void add(Type item) = 0;    // Is both a number and the representation of numbers
    virtual void addAtIndex(int index, Type item) = 0;  // The 0 means its 'not real'
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper accessor methods
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* ListStructure_h */
