/*
 File:    Jain3Main.cpp
 Project: CSIS 3400 Assignment 3
 Author:  Arsh Jain
 History: Version 1.0 September 22, 2019
*/
#include "Jain3.h"
int main()
{
	cout << "\n\n\n\n SORTED ARRAY NO DUPLICATES:\n";

	int b1[8] = { 3,5,7,9 };
	SortedArrayBufferNoDups a1(b1, 8,4);
	cout << "At the start: ";
	a1.display();
	cout << "\n\nAdding 2\n";
	a1.insert(2);
	a1.display();
	cout << "\n\nAdding 6\n";
	a1.insert(6);
	a1.display();
	cout << "\n\nAdding 5\n";
	a1.insert(5);
	a1.display();
	cout << "\n\nRemoving 5\n";
	a1.stableRemove(5);
	a1.display();
	cout << "\n\nAdding 11\n";
	a1.insert(11);
	a1.display();
	
	
	cout << "\n\n\n\n SORTED ARRAY WITH DUPLICATES: \n";
	int c1[20] = { 3,5,7,7,7,9 };
	SortedArrayBufferWithDups a2(c1, 20, 6);
	cout << "At the start: ";
	a2.display();
	cout << "\n\nAdding 2\n";
	a2.insert(2);
	a2.display();
	cout << "\n\nAdding 6\n";
	a2.insert(6);
	a2.display();
	cout << "\n\nAdding 5\n";
	a2.insert(5);
	a2.display();
	cout << "\n\nRemoving 5\n";
	a2.stableRemove(5);
	a2.display();
	cout << "\n\nAdding 11\n";
	a2.insert(11);
	a2.display();
	cout << "\n\n\nFind All 7: " << a2.findAll(7) << endl;
	cout << "\nRemoving all 7s";
	a2.stableRemoveAll(7);
	a2.display();

}