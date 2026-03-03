#pragma once
#include "Character.h"
class Sorcerer : public Character
{
protected:
	unsigned int sorceryPoints;

public:
	Sorcerer();
	Sorcerer(std::string _name, int _xPos, int _yPos);

	~Sorcerer();

	void PrintData(bool shouldEnd = false) override; // Correct
	void PrintType(); //Incorrect
};

