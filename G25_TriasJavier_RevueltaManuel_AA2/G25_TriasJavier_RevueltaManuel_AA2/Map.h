#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
#include "Map.h"

struct Board
{
	int NUM_ROWS = 0;
	int NUM_COLUMNS = 0;
	char **board;
};