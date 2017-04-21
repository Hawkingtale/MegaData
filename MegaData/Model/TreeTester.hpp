//
//  TreeTester.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 4/17/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//


#ifndef TreeTester_h
#define TreeTester_h

#include "../Model/Node.hpp"
#include "../Model/Array.hpp"
#include "../Model/Timer.hpp"
#include "../Model/IntNodeArray.hpp"
#include "../Model/List.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Queue.hpp"
#include "../Model/CircularList.hpp"
#include "../Model/Meme.hpp"
#include "../Model/FoodItem.hpp"
#include "../Model/CrimeData.hpp"
#include "../Model/.hpp"
#include "../Model/.hpp"
#include <string>


void DataController :: testBinarySearchTreeOperations()

{
    
    BinarySearchTree<int> numbers;
    
    numbers.insert(9843);
    
    numbers.insert(10);
    
    numbers.insert(43);
    
    numbers.insert(-123);
    
    numbers.insert(23465);
    
    numbers.insert(10); // won't go in
    
    numbers.insert(43243);
    
    numbers.insert(-45677654);
    
    numbers.insert(92165);
    
    
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    numbers.inOrderTraversal();
    
    
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    
    cout << "Balanced should be false || 0 and is: " << numbers.isBalanced() << endl;
    
}
#endif /* TreeTester_h */
