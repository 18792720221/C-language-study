#include "game.h"
char Judge(char board[ROW][COL], int row, int col)
{
	int i, j, key;
	if      (board[0][0] == board[0][1]&& board[0][1] == board[0][2] && board[0][0] != ' ') return board[0][0];
	else if (board[1][0] == board[1][1]&& board[1][1] == board[1][2] && board[1][0] != ' ') return board[0][0];
	else if (board[2][0] == board[2][1]&& board[2][1] == board[2][2] && board[2][0] != ' ') return board[0][0];
	else if (board[0][0] == board[1][1]&& board[1][1] == board[2][2] && board[0][0] != ' ') return board[0][0];
	else if (board[0][2] == board[1][1]&& board[1][1] == board[2][0] && board[1][1] != ' ') return board[1][1];
	else if (board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[0][0] != ' ') return board[0][0];
	else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] != ' ') return board[0][0];
	else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[0][2] != ' ') return board[0][0];
	else 
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				if (board[i][j] == ' ') key = 1;
			}
		}
		if (key == 1) return 'c';
		else return 'p';
	}

}