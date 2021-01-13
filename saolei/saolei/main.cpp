#include "game.h"
int main() 
{
	srand(unsigned int (time(NULL)));
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	int input;
	do 
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(mine,show);
			break;
		case 0:
			printf("\n游戏结束\n");
			break;
		default:
			printf("输入错误,请重新输入:>\n");
			break;
		}
	} while (input);

	return 0;
}