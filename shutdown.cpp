#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include <stdio.h>


int main()
{
	char input[20];
	printf("电脑将在600s内关机\n");
	system("shutdown -s -t 600");
	again:
	printf("输入“我是猪”，将结束关机\n请输入:>\n");
	scanf("%s", input);
	if (!strcmp(input, "我是猪")) 
	{ system("shutdown -a"); 
	}
	else
	goto again;
	return 0;
}
