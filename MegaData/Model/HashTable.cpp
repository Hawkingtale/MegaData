//
//  HashTable.cpp
//  MegaData
//
//  Created by Hachtel, Matthew on 5/1/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#include <cmath>
#include <assert.h>
#include "HashNode.hpp"

class HashTable
{
private:
    long capacity;
    long size;
    double efficiencyPercentagee;
    HashNode<Type> * * hashTableStorage;
    bool isPrime(long sampleNumber);
    void resize();
    long nextPrime(long current);
    long findPosition(HashNode<Type> * data);
    long handleCollision(HashNode<Type> * data, long currentPosistion);
public:
    HashTable();
    ~HashTable();
};
