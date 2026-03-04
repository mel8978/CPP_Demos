#include <iostream>
#include "Player.h"
#include "time.h"
using namespace std;

void wrapper()
{
	srand(time(nullptr));

	Player myPlayer;
	myPlayer.PrintInventory();
	myPlayer.IncreaseItem(2);
	myPlayer.PrintInventory();

	return;
}

int main()
{
	wrapper(); // Avoid false positive memory leaks by taking main out of scope

	std::cout << "Hello World" << std::endl;

	_CrtDumpMemoryLeaks();
}