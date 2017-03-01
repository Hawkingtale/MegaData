//
//  BiDirectionalNode.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 2/27/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

tmplate <class Type>
class BiDirectionalNode : public Node<Type>
{
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type data;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type>* previous,
                      BiDirectionalNode<Type>* next);
    
}
template<class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : node<Type>()
{
    
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node<Type>(data)
{
    
}


#endif /* BiDirectionalNode_h */