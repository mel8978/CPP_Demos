#include <iostream>
#include <time.h>

int intMutator(int input);

int main()
{
	srand(time(NULL));
	std::cout << intMutator(5) << std::endl;
}

int intMutator(int input) 
{
	for (unsigned short i = 0; i < 20; i++)
	{
		input += rand() % 200;
	}
	return input;
}

