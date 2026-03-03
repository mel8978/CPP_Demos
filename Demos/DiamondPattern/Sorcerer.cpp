#include "Sorcerer.h"
#include <iostream>
Sorcerer::Sorcerer() : Character("Sorcerer", 0, 0)
{
	std::cout << "Sorcerer Default Constructor\n";
	sorceryPoints = 2;
}

Sorcerer::Sorcerer(std::string _name, int _xPos, int _yPos) : Character(_name, _xPos, _yPos)
{
	std::cout << "Sorcerer Param Constructor for: " << name << std::endl;
	sorceryPoints = 2;
}

Sorcerer::~Sorcerer()
{
	std::cout << "Sorcerer Destructor for " << name << std::endl;
}

void Sorcerer::PrintData(bool shouldEnd)
{
	Character::PrintData(false);
	std::cout << " Sorcery Points: " << sorceryPoints;
	if (shouldEnd)
	{
		std::cout << std::endl;
	}
}

void Sorcerer::PrintType()
{
	std::cout << "Sorcerer!\n";
}
