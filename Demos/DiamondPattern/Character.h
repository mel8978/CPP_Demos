#pragma once
#include <string>
#include <vector>

struct Character
{
	std::string name;
	int xPos;
	int yPos;
	std::vector<std::string> inventory;

	Character();
	Character(std::string _name, int _xPos, int _yPos);

	~Character();

	virtual void PrintData(bool shouldEnd = false); //Correct
	void PrintType(); //Incorrect way to declare something is going to be overwritten
};

