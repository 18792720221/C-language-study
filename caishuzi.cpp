#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

void menu() {
		printf("################################\n");
		printf("# ����1��ʼ��Ϸ������0�˳���Ϸ #\n");
		printf("################################\n");
}
void game() {
	int guess;
	int randnumber = rand()%100+1;//����һ��1~100�������
	while (1) {
		printf("��ѡ��:>\n");
		scanf("%d", &guess);
		if (guess == -1)break;
		else if (guess > 100 || guess < 1) printf("�������\n");
		else if (guess > randnumber) printf("�´���\n");
		else if (guess < randnumber) printf("��С��\n");
		else {
			printf("�¶���\n");
			break;
		}
	}


}


int main() {
	srand(time(NULL));//srand Ӧ�÷����������У������ھֲ������У����ɵ���α�����
	 int play;
	while (1) 
	{
		menu();
		scanf("%d", &play);
		switch (play) 
		{
		case 0:
			printf("�˳���Ϸ\n"); 
			system("cls");  
			break;
		case 1:game(); break;
		default:printf("�������\n");
		}
		if (play == 0) break;
	}
	exit(0);

	return 0;
}
                                