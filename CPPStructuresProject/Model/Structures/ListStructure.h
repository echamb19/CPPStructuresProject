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
#include "../../Noces/LinearNode.hpp"

template <class Type>
class List
{
protected:
    int size;
public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* ListStructure_h */
