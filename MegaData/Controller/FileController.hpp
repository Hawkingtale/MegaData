//
//  FileController.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 3/27/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Mode/DoubleList.hpp"
#include "../Mode/FoodItem.hpp"
#include "../Mode/Meme.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class FileController
{
private:
    DoubleList<FoodItem> foodItemList;
    DoubleList<Meme> memeList;
public:
    DoubleList<Meme> readDataFromFile(string filename);
};

#endif /* FileController_hpp */
