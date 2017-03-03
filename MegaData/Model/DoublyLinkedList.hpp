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
    int size;
public:
    virtual void add(Type data) = 0;
    virtual Type remove(int index) = 0;
    DoublyLinkedList();
    virtual ~DoublyLinkedList() = 0;
    
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;


};

template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    size = 0;
    front = nullptr;
    end = nullptr;
}
template <class Type>
int DoublyLinkedList<Type> :: ~DoublyLinkedList()
{
    
}
template <class Type>
int DoublyLinkedList<Type> :: getSize()
{
    return size;
}
template <class Type>
int BiDirectionalNode<Type> * DoublyLinkedList<Type>:: getFront() const
{
    return front;
}
template <class Type>
int BiDirectionalNode<Type> * DoublyLinkedList<Type>:: getEnd() const
{
    return end;
}

template <class Type>
int BiDirectionalNode<Type> :: setSize(int size)
{
    
}
template <class Type>
int BiDirectionalNode<Type> :: getSize()

template <class Type>
void DoublyLinkedList<Type>

#endif /* BiDirectionalNode_h */
