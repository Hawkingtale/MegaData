//
//  Model.h
//  MegaData
//
//  Created by Hachtel, Matthew on 2/13/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class type>
class Node
{
private:
    Type nodeData;
    Node<Type> * nodePointer;
public:
    Node();
    Node(Type nodeData);
    node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setNodePointer(Node<Type> pointer);
    Type getNodeData();
    Node<Type> * getNodePointer();
};


#endif /* Node_hpp */
