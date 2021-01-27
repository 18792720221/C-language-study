#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	//代码1
	int n = 1;
	scanf("%d", &n);
	const int a = 9;
	int arr[a] = { 0 };
	//代码2
	int* ptr = NULL;
	ptr = (int*)malloc(n * sizeof(int));
	if (NULL != ptr)//判断ptr指针是否为空
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			*(ptr + i) = 0;
		}
	}
	free(ptr);//释放ptr所指向的动态内存
	ptr = NULL;//是否有必要？
	return 0;
}