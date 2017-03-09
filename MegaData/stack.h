//
//  stack.h
//  MegaData
//
//  Created by Hachtel, Matthew on 3/7/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include "DoublyLinkedList.hpp"

template <class Type>
class Stack : public DoublyLinkedList<Type>
{
private:
public:
    stack();
    ~stack();
    void add(Type value);
    Type remove(int index);
    Type pop();
    Type peek();
    void push(Type data)
};


template <class Type>
stack<Type> :: stack() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
Stack<Type> :: ~Stack()
{
    
}

template <class Type>
void Stack<Type> :: add(Type valueToAdd)
{
    push(valueToAdd);
}

template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode<Type>(addedThing);
    
    if(this->getSize() == 0 || this->getFront() == nullptr || this->getEnd() == nullptr)
    {
        this->setFront(addToStack);
        
    }
    else
    {
        this->getEnd()->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->getEnd());
    }
    this->setEnd(addToStack);
    this->setSize(this->getSize() + 1);
}

template <class Type>
Type Stack<Type> :: remove(int index)
{
    assert(index == this->getSize() - 1 && this->getSize() > 0);
    Type removed = this->getEnd()->getNodeData();
    
    BiDirectionalNode<Type> * update = this->getEnd();
    update = update->getPreviousPointer();
    
    if(update != nullptr)
    {
        update->setNextPointer(nullptr);
    }
    
    delete this->getEnd();
    
    this->setEnd(update);
    return removed;
}

template <class Type>
Type Stack<Type> :: peek()
{
    asser(this->getSize() > 0);
    return this->getEnd()->getNodeData();
}









#endif /* stack_h */
