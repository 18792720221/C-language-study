#include "game.h"
void Cmp(char board[ROW][COL], int row, int col) 
{
	int i, j;
	
	while (1) 
	{
		i = unsigned int (rand() % 3);
		j = unsigned int(rand() % 3);
		
		if (board[i][j] == ' ') 
		{
			board[i][j] = '#';
			printf("���ԵĻغ�\n");
			Display(board, row, col);
			break;
		}
		
	}
}