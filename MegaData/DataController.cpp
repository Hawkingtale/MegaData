//
//  DataController.cpp
//  MegaData
//
//  Created by Hachtel, Matthew on 2/6/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#include "DataController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"

using namespace std;

DataController :: DataController()
{
    wordNode = Node<string>();
    numberNode = Node<int>();
}

void DataController :: testNodes()
{
    cout << "The contents of the node<String>" << endl;
    cout << wordNode.getNodePointer() << endl;
    cout << "Here is the node<int>" << endl;
    cout << numberNode.getNodePointer() << endl;
}
void DataController :: start()
{
    cout << "Starting the project" << endl;
    testNodes();
    cout << "Swtiching to the array testing" << endl;
    testIntArray();
    cout << "Switching to advanced feature testing" << endl;
    testAdvancedFeatures();
    testLists();
    cout << "Finish testing" << endl;
}

void DataController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for (int index = 0; index < 3 ; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
    cout << "Testing input" << endl;
    
    for(int index = 0; index < 3; index++)
    {
        temp.setAtIndex(index, index);
    }
    
    for (int index = 0; index < temp.getSize() ; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
}

void DataController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    
    if(showDestructor < 1)
    {
        Array<string> words = Array<string>(5);
        cout << "There should be messages about destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the last spot");
    Array<string> copiedWords = Array<string>(words);
}

void DataController :: testLists()
{
    List<string> sample;
    sample.addFront("am");
    sample.addEnd("cool");
    sample.addFront("I");
    cout << "This should go I, am, cool" << endl;
    
    for(int index = 0; index < sample.getSize(); index++)
    {
        cout << sample.getFromIndex(index) << endl;
    }
    
    cout << "Size should read 3 and is " << sample.getSize() << endl;
}
