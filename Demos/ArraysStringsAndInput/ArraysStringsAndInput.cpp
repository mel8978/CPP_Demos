#include <iostream>

void getSize(int data[], const unsigned int SIZE);

int main()
{
	const unsigned int DATA_SIZE = 5;
	//Empty spaces are filled with zero after initialization
	int myData[DATA_SIZE] = {1, 5, 6};
	//std::cout << "myData[2] = " << myData[2] << std::endl;
	printf("myData[2] = %i\nmyData[1] = %i\n", myData[2], myData[1]);
	//sizeof() returns memory size of parameter;
	std::cout << sizeof(myData) / sizeof(int) << std::endl;
	getSize(myData, DATA_SIZE);

	//C-style strings
	char name[9] = "Lavella"; //Null terminated string
	//Null terminator looks for a specific character in the string to determine the length
	
	char fakeName[9] = "Robert";
	char fullName[30] = "Michael ";

	//fullName = name;
	strcpy_s(fakeName, fullName);
	std::cout << fakeName << std::endl;


	//fullName += name;
	strcat_s(fullName, name);
	std::cout << fullName << std::endl;


	//fullName.length;
	std::cout << strlen(fullName) << std::endl;



	char username[100];


	std::cout << "Enter your name: ";
	std::cin.getline(username, 100);

	std::cout << "Hello, " << username << std::endl;

	char input;
	std::cout << "Enter a character: ";
	std::cin >> input;
	std::cout << "You entered: " << input << std::endl;
}

void getSize(int data[], const unsigned int SIZE) {
	//No longer the same thing
	//Parameter passes a reference to array, not original array
	//changing data in function will also change the original
	std::cout << "Inside function\n";
	//Reference to array is a pointer, a number that keeps track of a memory address
	//Doesn't know size of the array
	std::cout << SIZE << std::endl;
}