#pragma once
#include <Windows.h>
#include "Types.h"

//void getKeys(bool Keys[9]) // Order: W, A, S, D, Esc, Up, Down, Right, Left
//{
//	Keys[0] = GetAsyncKeyState(0x57); // W
//	Keys[1] = GetAsyncKeyState(0x41); // A
//	Keys[2] = GetAsyncKeyState(0x53); // S
//	Keys[3] = GetAsyncKeyState(0x44); // D
//	Keys[4] = GetAsyncKeyState(VK_ESCAPE);
//	Keys[5] = GetAsyncKeyState(VK_UP);
//	Keys[6] = GetAsyncKeyState(VK_DOWN);
//	Keys[7] = GetAsyncKeyState(VK_RIGHT);
//	Keys[8] = GetAsyncKeyState(VK_LEFT);
//}

struct InputKeysPlayer1
{
	bool keys[(int)movePlayer1::COUNT1] = {};

	void Update()
	{
		keys[(int)movePlayer1::ESCAPE] = GetAsyncKeyState(VK_ESCAPE);
		keys[(int)movePlayer1::UP1] = GetAsyncKeyState(VK_UP);
		keys[(int)movePlayer1::DOWN1] = GetAsyncKeyState(VK_DOWN);
		keys[(int)movePlayer1::LEFT1] = GetAsyncKeyState(VK_LEFT);
		keys[(int)movePlayer1::RIGHT1] = GetAsyncKeyState(VK_RIGHT);
	}
};

struct InputKeysPlayer2
{
	bool keys[(int)movePlayer2::COUNT2] = {};

	void Update()
	{
		keys[(int)movePlayer2::UP2] = GetAsyncKeyState(0x57);
		keys[(int)movePlayer2::DOWN2] = GetAsyncKeyState(0x53);
		keys[(int)movePlayer2::LEFT2] = GetAsyncKeyState(0x41);
		keys[(int)movePlayer2::RIGHT2] = GetAsyncKeyState(0x44);
	}
};