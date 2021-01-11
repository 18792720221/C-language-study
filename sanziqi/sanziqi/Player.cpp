#include "game.h"
void Player(char board[ROW][COL], int row, int col) 
{
	int i, j;
	while (1)
	{
		printf("请玩家输入要下的位置，格式为# #\n");
		printf("请输入:>");
		scanf("%d%d", &i, &j);
		printf("\n");
		if (i >= 1 && i <= 3 && j >= 1 && j <= 3)
		{
			if (board[i-1][j-1] == '*' || board[i-1][j-1]== '#') 
			{
				printf("该处已有棋子\n");
			}
			else
			{
				board[i - 1][j - 1] = '*';
				Display(board, row, col);
				break;
			}
		}
		else printf("输入错误\n");
	}
}

