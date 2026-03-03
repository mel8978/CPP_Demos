#pragma once
#include <string>

//Access Modifiers
// Public - Accessible in class, in child classes, on instances
// Protected - Accessible in class, and in child classes
// Private - Accessible only within class

class Player
{
	//Attributes are implicitly private in classes, public in structs
private:
	std::string name;
	short* inventory;
	unsigned short invSize;

public:
	Player();
	~Player(); //Destructor gets rid of class variables to stop memory leaks

	void PrintInventory();
	void IncreaseItem(unsigned short _slot);
	std::string GetName();
};