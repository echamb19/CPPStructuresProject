//
//  Array.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <assert.h>     //Used for validating user supplied data.
#include <iostream>     //Used for tracing and debug statements.

using namespace std;    //Uded for keyword access.

template <class Type>   //Allows it to work with any type
class Array
{
private:
    Type * internalArray;
    int size;
public:
    //Constructor
    Array<Type>(int size);
    
    //Copy Constructor
    Array<Type>(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new Type[size];
}

template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
    this->size = toCopy.getSize();
    
    //Build Data Structure
    internalArray = new Type[size];
    
    for(int index = 0; index < size; inde++)
    {
        internalArray[index] = toCopy[index];
    }
}

template <class Type>
Array<Type> :: ~Array() //The ~ is for destructors only and cannot be overridden
{
    delete [] internalArray;
}

#endif /* Array_h */
