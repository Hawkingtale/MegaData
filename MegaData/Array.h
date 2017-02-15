//
//  Array.h
//  MegaData
//
//  Created by Hachtel, Matthew on 2/15/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include"Node.hpp"
#include <assert.h>

template <class Type>
class Array
{
private:
    int size;
    Node<Type> * frong;
public:
    Array();
    Array(int size);
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
    int getSize();
};

#endif /* Array_h */
