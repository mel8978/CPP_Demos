#include "Cleric.h"
#include <iostream>
Cleric::Cleric() : Character("Cleric", 0, 0)
{
	std::cout << "Cleric Default Constructor\n";
	deity = "Binky";
}

Cleric::Cleric(std::string _name, int _xPos, int _yPos) : Character(_name, _xPos, _yPos)
{
	std::cout << "Cleric Param Constructor for: " << name << std::endl;
	deity = "Binky";
}

Cleric::~Cleric()
{
	std::cout << "Cleric Destructor for " << name << std::endl;
}

void Cleric::PrintData(bool shouldEnd)
{
	Character::PrintData(false);
	std::cout << " Deity: " << deity;
	if (shouldEnd)
	{
		std::cout << std::endl;
	}
}

void Cleric::PrintType()
{
	std::cout << "Cleric!\n";
}
