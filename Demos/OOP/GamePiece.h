#pragma once
class GamePiece
{
protected:
	int xPos;
	int yPos;
	char* name;

public:
	GamePiece();
	GamePiece(int _xPos, int _yPos, const char* _name);
	~GamePiece();

	virtual void Print();
};

