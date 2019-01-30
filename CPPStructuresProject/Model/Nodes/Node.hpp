//
//  Node.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include<assert.h>

template <class Type>   //template says that what follows isn't normal
class Node
{
private:
    Type data;
public:
    Node();
    Node(Type data);
    Type getData();
    void setData(Type data);
};

//C++ needs an empty constructor or it is confused                                     
template <class Type>
Node<Type> :: Node()
{}

//Template definitions
template <class Type>
Node<Type> :: Node(Type data)
{
    this-> data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

#endif /* Node_h */
