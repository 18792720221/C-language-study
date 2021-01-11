#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int main()
{
	int input;
	srand(time(NULL));
	char board[ROW][COL];
	do 
	{		
		printf("*******************\n");
		printf("**1.play   0.exit**\n");
		printf("*******************\n");
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0: 
			printf("游戏退出\n");
			break;
		case 1:
			game(board,ROW,COL);
			break;
		default:
			printf("输入错误，请重新输入:>\n");
			break;
		}
	} while (input);
	return 0;
}