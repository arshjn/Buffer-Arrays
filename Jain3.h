/*
 File:    Jain3.h
 Project: CSIS 3400 Assignment 3
 Author:  Arsh Jain
 History: Version 1.0 September 22, 2019
*/
#include<iostream>

using namespace std;
class SortedArrayBufferNoDups
// This class is a sorted array and does not allow the insertion of duplicate values
{
private:      
	int BUFFER_SIZE;             
	int numberOfElements = 0;             
	int * intArray;                     
	int locationOf(int);                   
public:
	SortedArrayBufferNoDups();
	SortedArrayBufferNoDups(int *,int size,int n);
	bool insert(int);                          
	bool find(int);                          
	void display();               
	bool stableRemove(int);

};
class SortedArrayBufferWithDups
//The ArrayBufferWithDups class should also look like the class in ArrayBufferWithNoDups class in previous section.  
{
private:
	int BUFFER_SIZE;
	int numberOfElements = 0;
	int* intArray;
	int locationOf(int);
public:
	SortedArrayBufferWithDups();
	SortedArrayBufferWithDups(int*, int size, int n);
	bool insert(int);
	bool find(int);
	void display();
	bool stableRemove(int);
	int findAll(int);
	int stableRemoveAll(int);

};