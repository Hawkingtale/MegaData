//
//  DataController.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 3/27/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef DataController_hpp
#define DataController_hpp

#include "../Model/DoubleList.hpp"
#include "../Model/FoodItem.hpp"
#include "../Model/CrimeData.hpp"
#include "../Model/BinarySearchTree.hpp"
#include "../Model/AVLTree.hpp"
#include "../Model/FoodItem.hpp"

#include <string> //String type
#include <fstream> //File operations
#include <iostream> //console access
#include <sstream> // String as stream

using namespace std;

class DataController
{
private:
    DoubleList<FoodItem> foodItemList;
public:
    DoubleList<FoodItem> readFoodItemDataFromFileAsList(string filename);
    void writeFoodItemDataStatistics(DoubleList<FoodItem> source, string filename);
};

#endif /* DataController_hpp */
