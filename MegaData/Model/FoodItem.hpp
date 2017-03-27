//
//  FoodItem.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 3/27/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef FoodItem_h
#define FoodItem_h


using namespace std;

class FoodItem
{
private:
    int calories;
    string foodName;
    double cost;
    bool delicious;
public:
    FoodItem();
    FoodItem(string name);
    
    int getCalories();
    string getFoodName();
    double getCost();
    bool isDelicious();
    
    void setCalories(int calories);
    void setFoodName(string name);
    void setCost(double cost);
    void setDelicious(bool delicious);
    
    bool operator < (FoodItem & otherFood);
    bool operator > (FoodItem & otherFood);
    bool operator == (FoodItem & otherFood);
};

#endif /* FoodItem_h */
