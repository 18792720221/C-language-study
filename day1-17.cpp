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


//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//ȱ������
//{}
//void test(int arr[][5])//ok����Ϊ4���ܱ���
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int *arr)//ok��
//{}
//void test(int* arr[5])//ok�����Ǹ�ָ������
//{}
//void test(int(*arr)[5])//ok��ָ��һ��5Ԫ�ص�����
//{}
//void test(int **arr)//ok��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}