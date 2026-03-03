#include <iostream>
#include "Character.h"
#include "Sorcerer.h"
#include "Cleric.h"
using namespace std;

void wrapper()
{
	Character defaultChar = Character();
	defaultChar.PrintData(true);
	defaultChar.PrintType();

	Character paramChar = Character("Josh", 5, 10);
	paramChar.PrintData(true);
	paramChar.PrintType();

	Sorcerer mySorc = Sorcerer();
	mySorc.PrintData(true);
	mySorc.PrintType();

	Cleric myCler = Cleric();
	myCler.PrintData(true);
	myCler.PrintType();
}
int main()
{
	wrapper();
	if (_CrtDumpMemoryLeaks())
	{
		cout << "Memory Leaks\n";
	}
}