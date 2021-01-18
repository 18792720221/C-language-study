#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

////void test(int arr[])//ok?
////{}
////void test(int arr[10])//ok?
////{}
//void test(int *arr)//ok?
//{}
////void test2(int *arr[20])//ok?
////{}
//void test2(int **arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//缺少列数
//{}
//void test(int arr[][5])//ok？如为4可能报错
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int *arr)//ok？
//{}
//void test(int* arr[5])//ok？这是个指针数组
//{}
//void test(int(*arr)[5])//ok？指向一个5元素的数组
//{}
//void test(int **arr)//ok？
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}