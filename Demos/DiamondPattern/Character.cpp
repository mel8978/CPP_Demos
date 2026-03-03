#include "Character.h"
#include <iostream>

Character::Character() : Character("Character", 0, 0)
{
	std::cout << "Character default constructor\n";
}

Character::Character(std::string _name, int _xPos, int _yPos)
{
	std::cout << "Character param constructor for: " << _name << std::endl;
	name = _name;
	xPos = _xPos;
	yPos = _yPos;

	inventory = std::vector<std::string>();
	inventory.push_back("Cloak");
	inventory.push_back("Bedroll");
	inventory.push_back("Torch");
}

Character::~Character()
{
	std::cout << "Character destructor for " << name << std::endl;
}

void Character::PrintData(bool shouldEnd)
{
	std::cout << "Name: " << name << ", Position:(";
	std::cout << xPos << ", " << yPos << "), Inventory: ";
	for (unsigned short i = 0; i < inventory.size(); i++)
	{
		std::cout << inventory[i] << ", ";
	}
	if (shouldEnd)
	{
		std::cout << std::endl;
	}
}

void Character::PrintType()
{
	std::cout << "Character!\n";
}
