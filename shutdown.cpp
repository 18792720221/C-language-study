#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include <stdio.h>


int main()
{
	char input[20];
	printf("���Խ���600s�ڹػ�\n");
	system("shutdown -s -t 600");
	again:
	printf("���롰���������������ػ�\n������:>\n");
	scanf("%s", input);
	if (!strcmp(input, "������")) 
	{ system("shutdown -a"); 
	}
	else
	goto again;
	return 0;
}
