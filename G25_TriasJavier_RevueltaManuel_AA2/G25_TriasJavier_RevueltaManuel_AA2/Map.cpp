#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
#include "Map.h"

void getMapParameters()
{
	std::ifstream myFile("config.txt");
	Board board1;

	if (myFile.is_open())
	{
		myFile >> board1.NUM_ROWS >> board1.NUM_COLUMNS;
	}
	for (int counterRows = 0; counterRows < board1.NUM_ROWS; counterRows++)
	{
		for (int counterColumns = 0; counterColumns < board1.NUM_COLUMNS; counterColumns++)
		{
			myFile >> board1.board[counterRows][counterColumns];
		}
	}
	myFile.close();
}

void printMap()
{
	Board board1;
	for (int i = 0; i < board1.NUM_ROWS; i++)
	{
		for (int j = 0; j < board1.NUM_COLUMNS; j++)
		{
			std::cout << board1.board[i][j];
		}
	}
}
