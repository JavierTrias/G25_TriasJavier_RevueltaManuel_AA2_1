#include <iostream>
#include <fstream>
#include <Windows.h>
#include "Map.h"

void getMapParameters()
{
	std::ifstream myFile("config.txt");

	if (myFile.is_open())
	{
		myFile >> NUM_ROWS >> NUM_COLUMNS;
	}
	for (int counterRows = 0; counterRows < NUM_ROWS; counterRows++)
	{
		for (int counterColumns = 0; counterColumns < NUM_COLUMNS; counterColumns++)
		{
			myFile >> board[counterRows][counterColumns];
		}
	}
	myFile.close();
}

void printMap()
{
	for (int i = 0; i < NUM_ROWS; i++)
	{
		for (int j = 0; j < NUM_COLUMNS; j++)
		{
			std::cout << board[i][j];
		}
	}
}
