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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0: 
			printf("��Ϸ�˳�\n");
			break;
		case 1:
			game(board,ROW,COL);
			break;
		default:
			printf("�����������������:>\n");
			break;
		}
	} while (input);
	return 0;
}