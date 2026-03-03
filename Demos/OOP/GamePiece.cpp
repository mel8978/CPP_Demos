#include "GamePiece.h"
#include <iostream>

GamePiece::GamePiece()
{
	xPos = 0;
	yPos = 0;
	name = new char[6] {"Piece"};
}

GamePiece::GamePiece(int _xPos, int yPos, const char* _name)
{
	xPos = _xPos;
	this->yPos = yPos;

	//#include <cstring>
	unsigned int nameSize = strlen(_name) + 1;
	name = new char[nameSize];
	strcpy_s(name, nameSize, _name);
}

GamePiece::~GamePiece()
{
	delete[] name;
	//name = nullptr;
	//^ not strictly necessary
}

void GamePiece::Print()
{
	//#include <iostream>
	std::cout << "Name: " << name << ", Position: (";
	std::cout << xPos << ", " << yPos << ")\n";
}
