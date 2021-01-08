#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void print(unsigned x)
{
	int a,b;
	a = x / 10;
	b = x % 10;
	if (a > 0)
	{
		print(a);
		printf("%d	", b);
	}
	else printf("%d	", b);
}


int main()
{
	unsigned int x;
	scanf("%d", &x);
	print(x);
	return 0;
}