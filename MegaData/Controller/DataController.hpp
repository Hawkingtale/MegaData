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
#include "../Model/Array.hpp"
#include "../Model/IntNodeArray.hpp"
#include "../Model/List.hpp"
#include "../Model/Stack.hpp"
#include "../Model/CircularList.hpp"
#include "../Model/Queue.hpp"
#include "../Model/Timer.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/BinarySearchTree.hpp"
#include <string>


using namespace std;


class DataController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string>wordNode;
    void testAdvancedFeatures();
    void testIntStack();
    void testFoodQueue();
    void testCircularList();
    void testDoubleList();
    void testLists();
    void testListTiming();
    void testBinarySearchTreeOperations();
public:
    DataController();
    void start();
    void testNodes();
};

#endif /* DataStructureController_hpp */
