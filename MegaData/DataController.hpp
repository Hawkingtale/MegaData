//
//  Controller.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 2/6/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "../Model/Node.hpp"
#include <string>

using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    
public:
    DataStructureController();
    void start();
};

#endif /* Controller_hpp */
