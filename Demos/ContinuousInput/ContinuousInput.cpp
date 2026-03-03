#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int xPos = 0;
	int yPos = 0;

	cout << "Welcome to 'Run to xPos == 100'!" << endl;
	cout << "Use WASD to move." << endl;

	char userInput;
	while (xPos < 100)
	{
		//cin >> userInput; // doesn't work bc user needs to press enter key
		
		//#include <conio.h>
		if (_kbhit())
		{
			userInput = _getch();

			switch (userInput)
			{
			case 'w':
			case 'W':
				yPos++;
				break;
			case 'a':
			case 'A':
				xPos--;
				break;
			case 'd':
			case 'D':
				xPos++;
				break;
			case 's':
			case 'S':
				yPos--;
				break;
			default: break;
			}
			cout << "Position: (" << xPos << ", " << yPos << ")\n";
		}
	}
}