//
//  HashTable.h
//  MegaData
//
//  Created by Hachtel, Matthew on 5/1/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

#include <cmath>
#include <assert.h>
#include "HashNode.hpp"

using nampespace std;

template <class Type>
class HashTable
{
private:
    long capacity;
    long size;
    double effeciencyPercentage;
    HashNode<Type> ** hasTableStorage;
    bool isPrime(long sampleNumber):
    void resize();
    long nextPrime(long current);
    long findPosition(HashNode<Type> * data);
    long handleCollision(HashNode<Type> * data, long currentPosition);
public:
    HashTable();
    ~HashTable();
    void add(Type data);
    bool remove(Type data);
    void displayContents();
};
#endif /* HashTable_h */
