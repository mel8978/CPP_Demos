#include <iostream>
using namespace std;

void passByValue(int x);

void passByPointer(int* x);

void passByReference(int& xRef);

int main()
{
	//Pointers section

	int myInteger = 10; //Stack (didn't use new) goes away when leaving this scope

	cout << myInteger << endl;
	cout << &myInteger << endl; // Will likely be different every time

	int* myIntPointer;
	myIntPointer = &myInteger;

	cout << myIntPointer << endl;
	cout << *myIntPointer << endl;

	*myIntPointer = 20;
	cout << myInteger << endl;

	int intOne = 100;
	passByValue(intOne);
	cout << intOne << endl;

	passByPointer(&intOne);
	cout << intOne << endl;

	int intThree = 300;
	passByReference(intThree);
	cout << intThree << endl;

	//Arrays Section

	int myArray[5] = { 10, 20, 30, 40, 50 };
	cout << myArray << endl;
	//Prints a memory address
	//Arrays are basically pointers for groups of variables
	//Points to the first byte of the first item in the array

	int* arr0 = &myArray[0];
	int* arr1 = &myArray[1];
	int* arr2 = &myArray[2];

	cout << "arr0 is at " << arr0 << endl;
	cout << "arr1 is at " << arr1 << endl;
	cout << "arr2 is at " << arr2 << endl;

	arr0 += 2;
	cout << "arr0 is at " << arr0 << endl;
	//Moves address forward by 2 ints worth of bytes
	cout << "arr0 is now " << *arr0 << endl;
	
	//*myArray is first item of array
	//Temp pointer arithmetic can move up by multiples of 4 bytes 
	//or by the type of the pointer
	cout << *(myArray + 1) << endl;
	cout << myArray[1] << endl;

	//Works like strings in c#
	//Higher memory cost
	string stringy = "Stinker";
	stringy.length();
	string* strPointer = &stringy;
	strPointer->length();
	//-> dereferencing pointer
}

void passByValue(int x) 
{
	x = 0;
}

void passByPointer(int* xPtr) 
{
	*xPtr = 0;
}

void passByReference(int& xRef) 
{
	xRef = 0;
}