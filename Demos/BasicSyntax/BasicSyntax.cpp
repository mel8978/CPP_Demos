#include <iostream>

int main()
{
	//std means standard, and is a namespace
	//The :: means to look inside the namespace
	//cout means "console out" and writes input to the console
	//<< is a stream operator and puts the string into the cout stream
	//std::cout << "Hello World!\n";

	//Printf is the C equivalent of cout
	//cout is slightly more customizable
	//printf("Hello World!\n");


	//Data Types
	bool myBool;
	char myChar = 'A';
	int myInt = 10; //defaults to signed integer
	float myFloat = 100.01f;
	double myDouble = 100.01;

	if (myFloat == myDouble) 
	{
		//You CAN use string literals in cout but there is no way to make it into a variable normally
		std::cout << "They are equal\n"; //Will not run
	}
	else if (myFloat == (float)myDouble) 
	{
		std::cout << "They are equal\n"; //Will run
	}

	//string myString; -- no string primitive type in C/C++


	//Sign modifiers - self explanatory;
	//unsigned integers cannot be negative number
	signed int mySignedInt = -100; // ~ -2.3 billion -> 2.3 billion
	unsigned int myUnsignedInt = 100; // 0 -> ~ 4.6 billion

	std::cout << myUnsignedInt << std::endl;


	//Size modifiers - Can be compiler specific
	//Only rule is long is bigger than short

	long myLongInt = 10000000;
	short int myShortInt = 1000;

	std::cout << sizeof(myLongInt) << std::endl;
	std::cout << sizeof(myShortInt) << std::endl;

	//Constants
	const float PI = 3.14159f;
	//PI = 4; doesn't work


	//Scope
	int x = 10; // x exists in scope of main function after line 62 until end of function

	if (x >= 10) 
	{
		//y exists only within this if statement
		int y = x * PI; //PI is type cast into an int
	}

	//y = 10; doesn't work



	//Arithmetic
	int a = 5;
	int b = 3;

	int add = a + b; // 8
	int sub = a - b; // 2
	int mul = a * b; // 15
	int div = a / b; // 1
	int mod = a % b; // 2

	a += b; // a = a + b;
	a -= b;
	a *= b; 
	a /= b;
	a %= b;

	a++;
	b--;


	//Relational Operators
	int large = 100;
	int small = 10;

	if (large > small) {};
	if (large >= small) {};
	if (small < large) {};
	if (small <= large) {};
	if (large == large) {};
	if (large != small) {};

	//Logic Operators

	if (true && true) {} //Boolean AND
	if ( true || false) {} //Boolean OR
	if (!false) {} //Boolean Negation


	for (unsigned short i = 0; i < 1000; i++) 
	{
		//use short int when working with small numbers to be memory efficient
	}

	while (large > small) 
	{
		large--;
	}

	switch (small) 
	{
	case 10:
		break;

	case 20:
		break;

	default:
		break;
	}

	//Basic syntax is almost identical to C#
}