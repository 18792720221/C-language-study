#include "game.h"
void Player(char board[ROW][COL], int row, int col) 
{
	int i, j;
	while (1)
	{
		printf("���������Ҫ�µ�λ�ã���ʽΪ# #\n");
		printf("������:>");
		scanf("%d%d", &i, &j);
		printf("\n");
		if (i >= 1 && i <= 3 && j >= 1 && j <= 3)
		{
			if (board[i-1][j-1] == '*' || board[i-1][j-1]== '#') 
			{
				printf("�ô���������\n");
			}
			else
			{
				board[i - 1][j - 1] = '*';
				Display(board, row, col);
				break;
			}
		}
		else printf("�������\n");
	}
}

