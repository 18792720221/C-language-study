#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//����쳲���������
//n>2?fib(n)=fib(n-1)+fib(n-2):fib(n)=1;
//�ǵݹ����
int main()
{
	int n,i, a=1, b=1, c;
	int fib;
	printf("��������Ҫ���м����n:>");
	scanf("%d", &n);
	if ( n<3) fib = 1;
	else
	{
		for (i = 0; i < n-2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		fib = c;
	}
	printf("\nfib(n)=%d\n", fib);
	return 0;
	
}




////�ݹ����
//int count = 0;//�ݹ����ڲ��ۼӲ���ȫ�ֱ�����
//int fib(int n) 
//{
//	if (n == 3) count++;
//	if (n > 2) return fib(n - 1) + fib(n - 2);
//	else return 1;
//}
//
//int main()
//{
//	int n;
//	printf("��������Ҫ���м����n:>");
//	scanf("%d", &n);
//	
//	printf("\nfib(n)=%d\n", fib(n));
//	printf("count=%d\n", count);
//	return 0;
//}