#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void swap(int *x, int *y) 
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}


int main()
{
	int arr[] = { 1,8,7,6,4,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int flag = 1;
	int i;
	while (flag == 1)
	{
		flag = 0;
		i = 0;
		for (i = 0; i <9; i++)
		{
			if (arr[i]>arr[i + 1])
			{
				swap(&arr[i], &arr[i + 1]);
				flag = 1;
			}
		}

	}
	for (i = 0; i <=9; i++) printf("%d	", arr[i]);
	return 0;
}