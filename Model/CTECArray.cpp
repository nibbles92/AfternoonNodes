/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: kkoc6943
 */

#include "CTECArray.h"

#include <assert.h>

using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	//Defensive code.
	assert(size > 0);

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{	//Regular ArrayNodes are being made.
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			this->head = nextNode;
		}
		else
		{	//The first ArrayNode needs to be make;
			ArrayNode<Type> * firstNode = new ArrayNode<Type>();
			this->head = firstNode;
		}
	}
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
		}
			delete deleteMe;
			deleteMe = head;
	}
	delete head;
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

template <class Type>
Type CTECArray<Type> :: get(int position)
{
		//We need to do bounds checking so we do not crash the program.
		assert(position< size && position >=0);

		//I am in bounds so I am inclusive
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}

}


template <class Type>
void CTECArray<Type> :: set(int position, const Type& value)
{
	assert(position< size && position >=0);

		ArrayNode<Type> * current = head;
		for (int spot = 0; spot <= position; spot++)
		{
			if (spot != position)
			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
		}
    
template<class Type>
int CTECArray<Type> :: indexOff(Type searchValue)
{
    assert(this->size > 0)
        
    ArrayNode<Type> * current = head;
    int indexNotFound = -1;
        
    for(int index = 0; index < this->size; index++)
    {
        if(current->getValue() == searchValue)
        {
            return index;
        }
        else
        {
            current = current->getValue();
        }
    }
    return indexNotFound;
    }
    
    template<class Type>
    int CTECArray<Type> :: indexOff(int startingIndex, Type searchValue)
    {
        assert(this->size > 0)
        assert(startingIndex >=0 && startingIndex < this->size);
        
        ArrayNode<Type> * current = head;
        int indexNotFound = -1;
        
        for(int index = startingIndex < this->size; index++)
        {
            if(current->getValue() == searchValue)
            {
                return index;
            }
            else
            {
                current = current->getValue();
            }
        }
        return indexNotFound;
    }
    

    
}

