#include "Player.h"
#include <iostream>

Player::Player(const char* _name) : GamePiece(0, 0, _name)
{
	//GamePiece(); This makes a new gamePiece that only lives in scope
	experience = 10;
}

void Player::Print()
{
	GamePiece::Print();
	std::cout << "Experience: " << experience << std::endl;
}
