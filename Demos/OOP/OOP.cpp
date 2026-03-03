#include <iostream>
#include "GamePiece.h"
#include "Player.h"
using namespace std;

int main()
{
    char name[10] = "Stinker";
    GamePiece myPiece = GamePiece(1, 3, name);
    myPiece.Print();

    GamePiece defaultPiece = GamePiece();
    defaultPiece.Print();
    
    Player myPlayer = Player("Michael");
    myPlayer.Print();


    //Check for memory leaks
    //Don't manually call destructor. It's automatically called
}