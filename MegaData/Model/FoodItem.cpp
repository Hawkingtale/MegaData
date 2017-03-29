//
//  FoodItem.cpp
//  MegaData
//
//  Created by Hachtel, Matthew on 3/27/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#include "FoodItem.hpp"
#include <iostream>

using namespace std;


FoodItem :: FoodItem()
{
    this->calories = 999;
    this->foodName = "yes";
    this->cost = 999.99;
    this->delicious = false;
    
    
};

FoodItem :: FoodItem(string name)
{
    this->foodName = name;
    this->calories = 23;
    this->cost = 99.9;
    this->delicious = true;
}

int FoodItem :: getCalories()
{
    return calories;
}

double FoodItem :: getCost()
{
    return cost;
}

string FoodItem :: getFoodName()
{
    return foodName;
}

bool FoodItem :: isDelicious()
{
    return delicious;
}



void FoodItem :: setCalories(int calories)
{
    this->calories = calories;
}

void FoodItem :: setCost(double cost)
{
    this->cost = cost;
}

void FoodItem :: setFoodName(string foodName)
{
    this->foodName = foodName;
}

void FoodItem :: setDelicious(bool delicious)
{
    this->delicious = delicious;
}

bool FoodItem :: operator < (FoodItem & otherFood)
{
    if(this->isDelicious() && otherFood.isDelicious())
    {
        if(this->getCalories() > otherFood.getCalories())
        {
            
            return true;
        }
        return false;
    }
    return false;
}
