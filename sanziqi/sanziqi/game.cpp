#include "game.h"
void game(char board[ROW][COL], int row, int col)
{
	Initial(board, row, col);
	Display(board, row, col);
	char flag=0;
	while (1)
	{
		Player(board, row, col);
		flag=Judge(board, row, col);
		if(flag=='*'||flag=='#'||flag=='p') break;
		Cmp(board, row, col);
		flag = Judge(board, row, col);
		if(flag=='*'||flag=='#'||flag =='p') break;
	}
	if (flag == 'p') printf("Æ½¾Ö\n");
	else printf("%c Win\n", flag);
	Sleep(10000);
	system("cls");

	
}