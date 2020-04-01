#include "Player.h"
#include "InputManager.h"
#include "Types.h"
#include "Map.h"

void movePlayers(int &movePlayer1, int &movePlayer2)
{
	Player1 PosPlayer1;
	Player2 PosPlayer2;
	Board map;
	if (movePlayer1 == 3 && map.board[PosPlayer1.posX + 1][PosPlayer1.posY] != 'X' && map.board[PosPlayer1.posX + 1][PosPlayer1.posY] != '*')
	{
		map.board[PosPlayer1.posX + 1][PosPlayer1.posY] = '1';
		PosPlayer1.posX ++;
	}
	else if (movePlayer1 == 2 && map.board[PosPlayer1.posX - 1][PosPlayer1.posY] != 'X' && map.board[PosPlayer1.posX + 1][PosPlayer1.posY] != '*')
	{
		map.board[PosPlayer1.posX - 1][PosPlayer1.posY] = '1';
		PosPlayer1.posX --;
	}
	else if (movePlayer1 == 0 && map.board[PosPlayer1.posX + 1][PosPlayer1.posY] != 'X' && map.board[PosPlayer1.posX][PosPlayer1.posY + 1] != '*')
	{
		map.board[PosPlayer1.posX][PosPlayer1.posY + 1] = '1';
		PosPlayer1.posY ++;
	}
	else if (movePlayer1 == 1 && map.board[PosPlayer1.posX + 1][PosPlayer1.posY] != 'X' && map.board[PosPlayer1.posX][PosPlayer1.posY - 1] != '*')
	{
		map.board[PosPlayer1.posX][PosPlayer1.posY - 1] = '1';
		PosPlayer1.posY --;
	}
	else if (movePlayer2 == 3 && map.board[PosPlayer2.posX + 1][PosPlayer2.posY] != 'X' && map.board[PosPlayer2.posX + 1][PosPlayer2.posY] != '*')
	{
		map.board[PosPlayer2.posX + 1][PosPlayer2.posY] = '1';
		PosPlayer2.posX++;
	}
	else if (movePlayer2 == 2 && map.board[PosPlayer2.posX - 1][PosPlayer2.posY] != 'X' && map.board[PosPlayer2.posX + 1][PosPlayer2.posY] != '*')
	{
		map.board[PosPlayer2.posX - 1][PosPlayer2.posY] = '1';
		PosPlayer2.posX--;
	}
	else if (movePlayer2 == 0 && map.board[PosPlayer2.posX + 1][PosPlayer2.posY] != 'X' && map.board[PosPlayer2.posX][PosPlayer2.posY + 1] != '*')
	{
		map.board[PosPlayer2.posX][PosPlayer2.posY + 1] = '1';
		PosPlayer2.posY++;
	}
	else if (movePlayer2 == 1 && map.board[PosPlayer2.posX + 1][PosPlayer2.posY] != 'X' && map.board[PosPlayer2.posX][PosPlayer2.posY - 1] != '*')
	{
		map.board[PosPlayer2.posX][PosPlayer2.posY - 1] = '1';
		PosPlayer2.posY--;
	}
}