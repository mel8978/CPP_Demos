#include <iostream>
using namespace std;


int main()
{
    int myInteger = 40; //Stack, did not use the new keyword

    int* myIntPtr = &myInteger; //Heap

    //delete myIntPtr; // Can't delete stuff off the stack, and don't even need to
    myIntPtr = nullptr; 

    //cout << new int(40) << endl; // Memory address of the heap int, is a memory leak
    int* heapIntPtr = new int(20); //Pointer is on stack, int is on heap

    (*heapIntPtr)++;
    cout << *heapIntPtr << endl;

    int* otherPtr = heapIntPtr; //Don't delete pointers equal to other pointers

    //Delete heap variables when done using them
    //DELETE *BEFORE* ASSIGNING NULLPTR, CAUSES MEMORY LEAKS

    delete heapIntPtr; //Deletes variable referenced by pointer, now dangling pointer
    //cout << *heapIntPtr << endl; //Gives error, referencing memory you don't own
    heapIntPtr = nullptr; // Change to nullptr bc it is a fixed value

    //delete otherPtr; //Cannot delete nullptr

    //Use nullptr for checks
    if (heapIntPtr != nullptr) {
        cout << *heapIntPtr << endl;
    }

    if (_CrtDumpMemoryLeaks())
    {
        cout << "Memory Leaks! Check debug output" << endl;
    }

    //Do this to crash the computer
    /*while (true) {
        new string;
    }*/
}