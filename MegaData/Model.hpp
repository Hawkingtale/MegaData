//
//  Model.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 2/6/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef Model_hpp
#define Model_hpp

class IntNode
{
private:
    int nodeData;
    IntNode * nodePointer;
public:
    //constructor
    IntNode();
    IntNode(int value);
    /*
     creates an IntNode with a specified value and next node Pointer
     */
    IntNode(int value, IntNode * nextNode);
    
    //methods
    int getNodeData();
    IntNode * getNodePointer();
    
    void setNodeData(int value);
    void setNodePointer(IntNode * next);
};

#endif /* Model_hpp */
