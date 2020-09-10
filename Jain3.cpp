/*
 File:    Jain3.cpp
 Project: CSIS 3400 Assignment 3
 Author:  Arsh Jain
 History: Version 1.0 September 22, 2019
*/
#include "Jain3.h"

SortedArrayBufferNoDups::SortedArrayBufferNoDups()
//Default Constructor
{
	BUFFER_SIZE = 8;
	intArray = new int[BUFFER_SIZE];
	numberOfElements = 0;
}

SortedArrayBufferNoDups::SortedArrayBufferNoDups(int* arr, int size, int n)
//Regular Constructor
{
	BUFFER_SIZE = size;
	intArray = arr;
	numberOfElements = n;
}

bool SortedArrayBufferNoDups::insert(int value)
//Insert has to insert in order and make sure that a duplicate is not inserted.  
{
	if (numberOfElements == 0)
	{
		intArray[0] = value;
		numberOfElements++;
		return true;
	}
	if (numberOfElements == BUFFER_SIZE + 1)
		return false;
	int i;
	for (i = 0; intArray[i] <= value; i++)
	{
		//cout << "\nvalue: " << value;
		//cout << "\ni = " << i;
		//cout << "\nintArray[i] = " << intArray[i];
		if (intArray[i] == value)
			return false;
		if (i == numberOfElements - 1)
		{
			intArray[numberOfElements] = value;
			numberOfElements++;
			return true;
		}
	}
	for (int j = numberOfElements - 1; j >= i; j--)
	{
		intArray[j + 1] = intArray[j];
	}
	intArray[i] = value;
	numberOfElements++;
	return true;

}

void SortedArrayBufferNoDups::display()
//To display the array
{
	if (numberOfElements == 1)
		cout << "\n{" << intArray[0] << "}\n";
	if (numberOfElements > 1)
	{
		cout << "\n{";
		for (int i = 0; i < numberOfElements - 1; i++)
			cout << intArray[i] << ",";
		cout << intArray[numberOfElements - 1];
		cout << "}" << endl;
	}
	if (numberOfElements == 0)
		cout << endl;
	cout << "NumberOfElements: " << numberOfElements;
}

int SortedArrayBufferNoDups::locationOf(int target)
//To find location of an element in the array
{
	for (int i = 0; intArray[i] <= target; i++)
	{
		if (target == intArray[i])
		{
			return i;
		}
	}
	return -1;
}

bool SortedArrayBufferNoDups::find(int target)
//To check if an element exists in the array
{
	int i = locationOf(target);
	if (i == -1)
		return false;
	else
		return true;
}

bool SortedArrayBufferNoDups::stableRemove(int target)
//stableRemove that has to be slightly altered so that you don’t have to go until the end of the array to find the integer.
//You can stop when you have reached a value greater than the value being passed in.
{
	int i = locationOf(target);
	if (i == -1)
		return false;

	for (; i < numberOfElements - 1; i++)
	{
		intArray[i] = intArray[i + 1];
	}
	numberOfElements--;
	return true;
}


//SortedArrayWithDups


SortedArrayBufferWithDups::SortedArrayBufferWithDups()
//Default Constructor
{
	BUFFER_SIZE = 8;
	intArray = new int[BUFFER_SIZE];
	numberOfElements = 0;
}

SortedArrayBufferWithDups::SortedArrayBufferWithDups(int* arr, int size, int n)
//Regular Constructor
{
	BUFFER_SIZE = size;
	intArray = arr;
	numberOfElements = n;
}

bool SortedArrayBufferWithDups::insert(int value)
// insert function that allows duplicates but needed to be inserted in order
{
	if (numberOfElements == 0)
	{
		intArray[0] = value;
		numberOfElements++;
		return true;
	}
	if (numberOfElements == BUFFER_SIZE + 1)
		return false;
	int i;
	for (i = 0; intArray[i] <= value; i++)
	{
		//cout << "\nvalue: " << value;
		//cout << "\ni = " << i;
		//cout << "\nintArray[i] = " << intArray[i];
		if (i == numberOfElements - 1)
		{
			intArray[numberOfElements] = value;
			numberOfElements++;
			return true;
		}
	}
	for (int j = numberOfElements - 1; j >= i; j--)
	{
		intArray[j + 1] = intArray[j];
	}
	intArray[i] = value;
	numberOfElements++;
	return true;

}

void SortedArrayBufferWithDups::display()
////To display the array
{
	if (numberOfElements == 1)
		cout << "\n{" << intArray[0] << "}\n";
	if (numberOfElements > 1)
	{
		cout << "\n{";
		for (int i = 0; i < numberOfElements - 1; i++)
			cout << intArray[i] << ",";
		cout << intArray[numberOfElements - 1];
		cout << "}" << endl;
	}
	if (numberOfElements == 0)
		cout << endl;
	cout << "NumberOfElements: " << numberOfElements;
}

int SortedArrayBufferWithDups::locationOf(int target)
//To find location of an element in the array
{
	for (int i = 0; intArray[i] <= target; i++)
	{
		if (target == intArray[i])
		{
			return i;
		}
	}
	return -1;
}

bool SortedArrayBufferWithDups::find(int target)
//To check if an element exists in the array
{
	int i = locationOf(target);
	if (i == -1)
		return false;
	else
		return true;
}

bool SortedArrayBufferWithDups::stableRemove(int target)
//stableRemove that has to be slightly altered so that you don’t have to go until the end of the array to find the integer.
//You can stop when you have reached a value greater than the value being passed in.
{
	int i = locationOf(target);
	if (i == -1)
		return false;

	for (; i < numberOfElements - 1; i++)
	{
		intArray[i] = intArray[i + 1];
	}
	numberOfElements--;
	return true;
}

int SortedArrayBufferWithDups::findAll(int target)
//The findAll function should return an int with the number of elements that have the same value as the target value
{
	int num = 0;
	for (int i = 0; intArray[i] <= target; i++)
	{
		if (target == intArray[i])
		{
			num++;
		}
	}
	if (num > 0)
		return num;
	return -1;
}

int SortedArrayBufferWithDups::stableRemoveAll(int target)
//the stableRemoveAll function should remove all copies of the target value.
//Have the stableRemoveAll function return an int with the number of values that were actually removed. 
{
	int count = 0;
	int i = locationOf(target);
	if (i == -1)
		return -1;
	while (i != -1)
	{
		for (; i < numberOfElements - 1; i++)
		{
			intArray[i] = intArray[i + 1];
		}
		i = locationOf(target);
		numberOfElements--;
		count++;
	}

	return count;
}