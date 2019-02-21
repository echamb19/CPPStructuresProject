//
//  DoubleNode.h
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef DoubleNode_h
#define DoubleNode_h

#include "Node.hpp"

template <class Type>
class DoubleNode: public Node<Type>
{
protected:
    DoubleNode<Type> * previous;
    DoubleNode<Type> * next;
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next);
    
    DoubleNode<Type> getPrevious();
    DoubleNode<Type> getNext();
    
    void setPrevious(DoubleNode<Type> * previous);
    void setNext(DoubleNode<Type> * next);
};


#endif /* DoubleNode_h */
