//
//  Stack.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "LinkedList.hpp"

template <class Type>
class Stack : public LinkedList<Type>
{
public:
    Stack();
    ~Stack();
    
    // Stack Specific Methods
    void push(Type data);
    Type pop();
    Type peek();
    
    // Overridden LinkedList Methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index)
};

template <class Type>
Stack<Type> :: Stack() : LinkedList<Type>()
{
    
}

template <class Type>
Stack<Type> :: ~Stack()
{
    while(this->size > 0)
    {
        pop();
    }
}

template <class Type>
void Stack<Type> :: push(Type data)
{
    
}

#endif /* Stack_h */
