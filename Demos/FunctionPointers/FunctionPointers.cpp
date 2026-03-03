#include <iostream>
#include "Other.h";
#include <algorithm>;
using namespace std;


typedef unsigned int uint; //Typedef creates alias for complex types
//typedef uint michael; DON'T do this :sob:



void helloWorld(int num);
void PrintNumTenTimes(int num);
bool descending(int a, int b);

int main()
{
    uint myInt; //uint only exists in this file


    //Function identifier is a memory pointer
    //Pointing to a block of code
    //(5) dereferences the pointer and calls the inner code
    helloWorld(5);
    cout << helloWorld << endl; //Prints a memory address

    //Function pointer points to identifier
    void(*helloPtr)(int);
    //Both lines serve same purpose for respective variables
    //Functions just need more info than primitives
    int* intPtr;
    //intPtr = &myVariable;...


    helloPtr = helloWorld;
    helloPtr(10);
    //But why use Function pointers?
    //Like all pointers, these can break normal limitations of scope

    doMath(4, 12, helloPtr); //Theoretically change where helloptr points to and change functionality of doMath
    helloPtr = PrintNumTenTimes;
    doMath(12, 80, helloPtr);


    const unsigned short ARR_SIZE = 5;
    int myArray[ARR_SIZE] = { 1, 3, 2, 6, 5 };

    sort(myArray, myArray + ARR_SIZE, descending); //Descending is a predicate function
    //sort(myArray, myArray + ARR_SIZE, [](int a, int b) -> { return a > b; });

    for (unsigned short i = 0; i < ARR_SIZE; i++)
    {
        cout << myArray[i] << ", ";
    }
    cout << endl;
}

void helloWorld(int num)
{
    cout << "Hello World " << num << endl;
}

void PrintNumTenTimes(int num)
{
    for (unsigned short i = 0; i < 10; i++)
    {
        cout << num << ", ";
    }
    cout << endl;
}

bool descending(int a, int b)
{
    return a > b;
}
