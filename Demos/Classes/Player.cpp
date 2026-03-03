#include "Player.h"
#include <iostream>

Player::Player()
{
	std::cout << "Constructor called" << std::endl;
	name = "Michael";
	invSize = 4;
	inventory = new short[invSize];

	for (unsigned short i = 0; i < invSize; i++)
	{
		inventory[i] = rand() % 100;
	}
}

Player::~Player()
{
	std::cout << "Destructor called for " << name << std::endl;

	delete[] inventory;
	//inventory = nullptr; Not necessary because player goes away when leaving scope
	//invSize = 0;
}

void Player::PrintInventory()
{
	std::cout << "Player: " << name << std::endl;
	std::cout << "Inventory: ";
	for (unsigned short i = 0; i < invSize; i++)
	{
		std::cout << inventory[i] << ", ";
	}
	std::cout << std::endl;
}

void Player::IncreaseItem(unsigned short _slot)
{
	if (_slot > invSize)
	{
		std::cout << "Invalid slot!\n";
		return;
	}

	inventory[_slot]++;
}

/// <summary>
/// No properties like in C#
/// </summary>
/// <returns></returns>
std::string Player::GetName()
{
	return name;
}
