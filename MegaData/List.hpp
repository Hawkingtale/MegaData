//
//  Header.h
//  MegaData
//
//  Created by Hachtel, Matthew on 2/23/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef Header_h
#define Header_h


























template <class Type>
void List<Type> :: addAtIndex(int index, Type value)
{
    assert(index >= 0 && index <= size);
    if(index == 0)
    {
        addFront(value);
    }
    else if(index == size)
    {
        addEnd(value);
    }
    else
    {
        Node<Type> * insertedNode = new Node<Type>(value);
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNodePointer();
        }
        
        previous->setNodePOinter(insteredNode);
        insertedNode->setNodePointer();
        
        size++;
    }
}

template <class Type>
Type List<Type> :: remove(int index)
{
    assert(index >= 0 && index < size);
    Type removed;
    
    Node<Type>* current = front;
    Node<Type> * previous = nullptr;
    Node<Type> * toBeRemoved = nullptr;
    
    if(index == 0)
    {
        toBeRemoved = front;
        this->front = front->getNodePOinter();
    }
    else if(index == size -1)
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getNodePointer();
        }
        
        toBeRemoved = current;
        previous->setNodePointer(nullptr);
        this->end = previous;
    }
    else
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getNodePointer();
        }
        
        toBeRemoved = current;
        current = toBeRemoved->getNodePointer();
        prefvious->setNodePointer(curret);
    }
    removed = toBeRemoved->getNodeData();
    
    delete toBeRemoved;
    
    size--;
    return remvoed;
}
#endif /* Header_h */
