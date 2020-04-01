#include "InputManager.h"
#include "Map.h"
#include "Player.h"
#include "Types.h"
#include "Constants.h"
#include "Map.cpp"
#include "Player.cpp"
#include <Windows.h>
#include <iostream>

int main()
{
	Player1 player1;
	Player2 player2;
	std::cout << "*-----SCORE-----*" << std::endl;
	std::cout << "Player 1: ";
	std::cin >> player1.score;
	std::cout << "Player 2: ";
	std::cin >> player2.score;

	InputKeysPlayer1 InputManager;

}