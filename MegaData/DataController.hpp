//
//  Controller.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 2/6/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "Model/Node.hpp"
#include "Model/Array.hpp"
#include "Model/IntNodeArray.hpp"
#include "Model/List.hpp"
#include <string>

using namespace std;


class DataController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
    void testAdvancedFeatures();
    void testLists();
    
public:
    DataController();
    void start();
};

#endif /* DataStructureController_hpp */
