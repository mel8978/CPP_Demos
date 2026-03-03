#pragma once
#include "GamePiece.h"

class Player : public GamePiece
{
private:
	int experience;

public:
	Player(const char* name);
	
	void Print() override;
};

