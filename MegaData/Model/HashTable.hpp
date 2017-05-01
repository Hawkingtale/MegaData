//
//  HashTable.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 5/1/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

template <class Type>
class HashNode
{
private:
    Type data;
    long key;
public:
    HashNode();
    HashNode(Type data);
    
    Type getData();
    long getKey() const;
    void setData(Type data);
};

template <class Type>
HashNode<Type> :: HashNode()
{
    this->key = rand();
}

template <class Type>
HashNode<Type> :: HashNode(Type data)
{
    this->key = rand();
    this->data = data;
}

template <class Type>
long HashNode<Type> :: getKey() const
{
    return this->key;
}

template <class Type>
Type HashNde<Type> :: getData()
{
    return this->data;
}

template <class Type>
void HashNode<Type> :: setData(Type data)
{
    this->data = data
}

template <class Type>
int Hashtable<Type> :: get
{
    this->capacity = 101;
    this->efficiencyPercecntage = .667;
    this->size = 0;
    this->hashTableStorage = HashNode<Type> [capacity];
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    
    delete [] hashTableStorage;
}

template <class Type>
int HashTable <Type> :: getNextPrime()
{
    if(candidateNumber <= 1)
    {
        return false;
    }
    else if(candidateNumber == 2 || candidateNumber == 3)
    {
        return true;
    }
    else if(candidateNumber % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <= sqrt(candidateNumber) + 1; next += 2)
        {
            if(candidateNumber % next == 0)
            {
                return false;
            }
        }
        return true;
    }
}

template <class Type>
bool HashTable<Type> :: isPrime(long candidateNumber)
{
    if(candidateNumber< = 1)
}

template <class Type>
bool HashTable<Type> :: findPosition(HashT)
{
    long insertPosition = data->getKey() % this->capacity;
    return isertPosition;
}

template <class Type>
long HashTable<Type> :: handleCollision(HashNode<Type> * data, long currentPosition)
{
    long shift = 17;
    
    for(long position = currentPosition + shift; position != currentPosition; position += shift)
    {
        if(position >=capacity)
        {
            position >= capcaity)
        }
        
        if(hashTableStorage[position] == nullptr);
        {
            return position;
        }
    }
    return -1;
}

template <class Type>
void HashTable<Type> :: displayContents()
{
    for(long index = 0; index < capacity; index++)
    {
        
        if(hashTableStorage[index] != nullptr)
        {
            cout << index << ", " << hashTableStorage[index]->getData()  << endl;
        }
    }
}




#endif /* HashTable_h */
