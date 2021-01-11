#include "game.h"
void Display(char board[ROW][COL], int row, int col)
{
	// * | * | *
	//---|---|---
	// * | * | * 
	//---|---|---
	// * | * | *
	int  i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++) 
		{
			printf(" %c ", board[i][j]);
			if (j < col-1) printf("|");
		}
		printf("\n");
		if(i<row-1)
		for (j = 0; j < col; j++)
		{
			 printf("---");
			 if (j < col-1) printf("|");
		}
		printf("\n");
	}
}