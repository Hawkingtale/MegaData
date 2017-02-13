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

using namespace std;

DataController :: DataController()
{
    
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



