#pragma once
#include "Character.h"
class Cleric : public Character
{
protected:
	std::string deity;

public:
	Cleric();
	Cleric(std::string _name, int _xPos, int _yPos);

	~Cleric();

	void PrintData(bool shouldEnd = false) override; // Correct
	void PrintType(); //Incorrect
};

