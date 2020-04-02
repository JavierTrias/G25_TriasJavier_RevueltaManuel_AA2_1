#include "InputManager.h"
#include "Types.h"
#include "Constants.h"
#include "Player.h"
#include "Map.h"
#include <Windows.h>
#include <iostream>


int main()
{
	Player1 player1;
	Player2 player2;
	std::cout << "*-----SCORE-----*" << std::endl;
	std::cout << "Player 1: " << player1.score << std::endl;
	std::cout << "Player 2: " << player2.score << std::endl;

	InputKeysPlayer1 InputManager;

	while (!InputManager.keys[(int)movePlayer1::ESCAPE])
	{
		//getMapParameters();
		//printMap();
		//movePlayers(movePlayer1, movePlayer2);
	}
}