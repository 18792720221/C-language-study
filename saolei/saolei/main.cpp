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
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(mine,show);
			break;
		case 0:
			printf("\n��Ϸ����\n");
			break;
		default:
			printf("�������,����������:>\n");
			break;
		}
	} while (input);

	return 0;
}