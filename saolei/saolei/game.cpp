#include "game.h"
void menu() 
{
	printf("*********************\n");
	printf("**1.play     0.exit**\n");
	printf("*********************\n");
}
void game(char mine[ROWS][COLS], char show[ROWS][COLS]) 
{

	initial(mine, '0');
	initial(show, '*');
	//display(mine);
	display(show);
	put(mine);
	display(mine);
	find(mine, show);
}
void initial(char board[ROWS][COLS], char set) 
{
	int i, j;
	for (i = 0; i <ROWS; i++)
	{
		for (j = 0; j <= COLS; j++) 
		{
			board[i][j] = set;
		}
	}
	 
}
void display(char board[ROWS][COLS]) 
{
	int i, j;
	for (j =WIDTH; j <= WIDTH+COL; j++) printf("%d ", j-WIDTH);
	printf("\n");
	for (i = 1+WIDTH; i <= ROW+WIDTH; i++)
	{
		printf("%d ", i-WIDTH);
		for (j = 1+WIDTH; j <= COL+WIDTH; j++)
		{
				printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void put(char board[ROWS][COLS]) 
{
	int x, y;
	int count=0;
	while (count<COUNT) 
	{
		x = rand() % ROW + WIDTH+1;
		y = rand() % ROW + WIDTH+1;
		if (board[x][y] == '0') 
		{
			board[x][y] = '1';
			count++;
		}
	}
}
void find(char mine[ROWS][COLS], char show[ROWS][COLS])
{
	int x, y;
	int count = 0;
	while (count<(ROW*COL-COUNT))
	{
		printf("请输入要选择的坐标(格式为# #);>");
		printf("\n");
		scanf("%d%d", &x, &y);
		
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			x = x + WIDTH;
			y = y + WIDTH;
			if (mine[x][y] == '1') 
			{
				printf("你被炸死了\n");
				printf("-------------------\n");
				display(mine);
				break;
			}
			else if (mine[x][y] == '0') 
			{
				
				num(mine,show, x, y,count);
				
				display(show);
			}
		}
		else printf("输入错误\n");
	}
	if (count ==(ROW*COL - COUNT))
	{
		printf("You Win!\n");
		display(mine);  
	}
}
void num(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int count)
{
	if(x >= 1 + WIDTH && x <= ROW + WIDTH && y >= 1 + WIDTH && y <= COL + WIDTH)
	{
		int flag;
		flag = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1];
		flag = flag - 7 * '0';
		show[x][y] = flag;
		count++;
		if (flag == '0'&&x >= 1 + WIDTH && x <= ROW + WIDTH && y >= 1 + WIDTH && y <= COL + WIDTH)
		{
			num(mine, show, x - 1, y - 1, count);
			num(mine, show, x - 1, y, count);
			num(mine, show, x - 1, y + 1, count);
			num(mine, show, x, y - 1, count);
			num(mine, show, x, y + 1, count);
			num(mine, show, x + 1, y - 1, count);
			num(mine, show, x + 1, y, count);
			num(mine, show, x + 1, y + 1, count);
		}
	
	}
}