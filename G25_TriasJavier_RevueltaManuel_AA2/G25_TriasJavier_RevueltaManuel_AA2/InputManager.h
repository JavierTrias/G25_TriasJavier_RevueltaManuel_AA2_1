#pragma once
#include <Windows.h>

void getKeys(bool Keys[9]) // Order: W, A, S, D, Esc, Up, Down, Right, Left
{
	Keys[0] = GetAsyncKeyState(0x57); // W
	Keys[1] = GetAsyncKeyState(0x41); // A
	Keys[2] = GetAsyncKeyState(0x53); // S
	Keys[3] = GetAsyncKeyState(0x44); // D
	Keys[4] = GetAsyncKeyState(VK_ESCAPE);
	Keys[5] = GetAsyncKeyState(VK_UP);
	Keys[6] = GetAsyncKeyState(VK_DOWN);
	Keys[7] = GetAsyncKeyState(VK_RIGHT);
	Keys[8] = GetAsyncKeyState(VK_LEFT);
}
