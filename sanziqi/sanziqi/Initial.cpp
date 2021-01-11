#include "game.h"
void Initial(char board[ROW][COL], int row, int col) 
{
	int i, j;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}	
	}
}