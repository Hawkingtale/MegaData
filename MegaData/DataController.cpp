//
//  Controller.cpp
//  MegaData
//
//  Created by Hachtel, Matthew on 2/6/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#include "DataController.hpp"
#include <iostream>
#include "DataRunner.cpp"
#include "../Model/In tNodeArray.hpp"

using namespace std;

DataController :: DataController()
{
    wordNode = Node<String>("Derpy face");
    numberNode = Node<int>();
}

void DataStructureController:: testNodes()
{
    cout << "The contents of Node<string>" <<endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getNodeData() << endl;
}
void DataStructureController :: start()
{
    cout << "starting the project" << endl;
    
    cout << "switching to the array testing" << endl;
    
    cout << "finisdhed testing" << endl;
}

void DataStructureController :: testIntArray()
{
    cout << "testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for(int index =0; index < 4; index++)
    {
        cout << temp.getFromIndex(index) << "is at spot " << index << endl;
    }
    
    for(int index = 0; index <3; index++)
    {
        temp.setAtIndex(index, index);
    }
    
    for(int index = 0; index < temp.getSize(); index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
}



