#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

void menu() {
		printf("################################\n");
		printf("# 输入1开始游戏，输入0退出游戏 #\n");
		printf("################################\n");
}
void game() {
	int guess;
	int randnumber = rand()%100+1;//生成一个1~100的随机数
	while (1) {
		printf("请选择:>\n");
		scanf("%d", &guess);
		if (guess == -1)break;
		else if (guess > 100 || guess < 1) printf("输入错误\n");
		else if (guess > randnumber) printf("猜大了\n");
		else if (guess < randnumber) printf("猜小了\n");
		else {
			printf("猜对了\n");
			break;
		}
	}


}


int main() {
	srand(time(NULL));//srand 应该放在主函数中，若放在局部函数中，生成的是伪随机数
	 int play;
	while (1) 
	{
		menu();
		scanf("%d", &play);
		switch (play) 
		{
		case 0:
			printf("退出游戏\n"); 
			system("cls");  
			break;
		case 1:game(); break;
		default:printf("输入错误；\n");
		}
		if (play == 0) break;
	}
	exit(0);

	return 0;
}
                                