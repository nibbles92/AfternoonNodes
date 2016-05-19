//
//  CTECHashTable.hpp
//  AfternoonNodes
//
//  Created by Rockne, Dylan on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECHashTable_hpp
#define CTECHashTable_hpp
#include "HashNode.cpp"
#include "CTECList.cpp"
#include <stdio.h>

#endif /* CTECHashTable_hpp */


template <class Type>
class CTECHashTable
{
private:    
    int size;
    int capacity;
    int chainedSize;
    int chainedCapacity;
    HashNode<Type> ** internalStorage;
    double efficiencyPercentage;
    CTECList<HashNode<Type>> * chainedStorage;
    void updateChainedCapacity();
    
    int findPosition(HashNode<Type> currentNode);
    int handleCollision(HashNode<Type> currentNode);
    void updateSize();
    int getNextPrime();
    bool isPrime(int canidateNumber);
    void updateCapacity();
    
    
public:
    CTECHashTable();
    ~CTECHashTable();
    
    void addChained(HashNode<Type> currentNode);
    void add(HashNode<Type> currentNode);
    bool remove(HashNode<Type> currentNode);
    bool contains(HashNode<Type> currentNode);
    int getSize();
    
};