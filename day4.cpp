#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>



//int compare(const void* a, const void *b)
//{
//	printf("%d", (*(int*)a - *(int*)b));
//	return (*(int*)a - *(int*)b);
//}
//int add(int *a,int *b)
//{
//	int temp;
//	temp = *a + *b;
//	printf("%d", temp);
//	return temp;
//}
//int main() 
//{
//	compare;
//	add;
//	return 0;
//}



//
//#include"add.h"//添加自己所定义的头文件 分模块编程时使用
//int main() 
//{
//	int x = 10, y = 20;
//	int sum;
//	sum = Add(x, y);//函数调用
//	return 0;
//
//}


//int Add(int, int);//函数声明
//int main() {
//	int x = 10, y = 20;
//	int sum;
//	sum = Add(x, y);//函数调用
//	return 0;
//}
//int Add(int x, int y) //函数定义
//{
//	int z;
//	z = x + y;
//	return z;
//}

//int main() 
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf 返回的是打印的字符数量
//	return 0;
//
//}



//int binsearch(int arr[], int k,int sz) //此处arr为指针
//{
//	
//	int left = 0, right = sz,mid;
//	while (left <= right) 
//	{
//		mid = (left + right) / 2;
//		if (k < arr[mid]) { right = mid - 1; printf("执行"); }
//		else if (k > arr[mid])left = mid + 1;
//		else return mid;
//	}
//
//}
//
//int main()
//{
//	int i,arr[10];
//	for (i = 0; i < 10; i++) arr[i] = i+1;
//	int a, k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	a = binsearch(arr, k,sz);//函数调用传递数组时，传递的是数组的首地址。
//	printf("%d", a);
//	return 0;
//}




////输出素数；
//int Is_Prime(int i) {
//	int j;
//	int flag = 1;
//	for (j = i / 2 + 1; j > 1; j--) 
//	{
//		if (i%j == 0) flag=0;
//	}
//	if (flag == 1)printf("%d	", i);
//
//}
//
//
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++) Is_Prime(i);
//	return 0;
//}



//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}





////交换两个变量的值；使用swap
//
//void swap1(int x, int y) //形参x y,只有在函数调用时，执行函数内部语句时才有效，函数调用开始它生成，函数调用结束它删除。
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}
//void swap2(int *pa,int *pb) {
//	int temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d	%d\n", a, b);
//	int* pa, *pb;
//	pa = &a;
//	pb = &b;
//	swap1(a, b);传参调用
//	printf("%d	%d\n", a, b);
//	swap2(pa, pb);传址调用
//	printf("%d	%d\n", a, b);
//	return 0;
//}