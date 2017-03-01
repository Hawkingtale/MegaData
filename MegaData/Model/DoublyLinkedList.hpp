//
//  BiDirectionalNode.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 3/1/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoubleLinkedList_h

#include "BiDirectionalNode.hpp"

template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
public:
    DoublyLinkedList();
    virtual ~DoublyLinkedList() = 0;
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
    
    virtual void add(Type data) = 0;
    virtual Type remove(int index) = 0;
};

template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    size = 0;
    front = nullptr;
    end = nullptr;
}
template <class Type>
int DoublyLinkedList<Type> :: getSize()
{
    return size;
}
template <class Type>
int DoublyLinkedList<Type> :: getFront()
{
    return front;
}
template <class Type>
int DoublyLinkedList<Type> :: getEnd()
{
    return end;
}



#endif /* BiDirectionalNode_h */
