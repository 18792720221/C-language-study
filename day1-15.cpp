#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<assert.h>
#include <stdio.h>




//int main()
//{
//	int i=10;
//	int a=0;
//	while ( a++,--i)
//	{
//		printf("hehe%d\n",i);
//	}
//
//	return 0;
//}





////void test(int *arr)
////{}
////void test(int* arr[5])//ok？
////{}
////void test(int(*arr)[5])//ok？
////{}
////void test(int **arr)//ok？
////{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}



////void test(int arr[])//ok?
////{}
//void test(int arr[10])//ok?
//{}
////void test(int *arr)//ok?
////{}
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




//char* mystrcpy(char dest[], const char src[]) 
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *ret = dest;
//
//	while (*dest++ = *src++)
//	{
//		
//	}
//	
//	return ret;
//}
//
//
////void mystrcpy(char dest[], char src[]) 
////{
////	int i = 0;
////	while (src[i] != '\0')
////	{
////		dest[i] = src[i];
////		i++;
////	}
////	dest[i] = src[i];
////}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "#############";
//	char arr3[] = "#############";
//	strcpy(arr2, arr1);
//	mystrcpy(arr3, arr1);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}




//typedef struct Stu 
//{
//	char name[20];
//	int age;
//}Stu;
//void print(struct Stu* ps)
//{
//	printf("name = %s   age = %d\n", (*ps).name, (*ps).age);
//	//使用结构体指针访问指向对象的成员
//	printf("name = %s   age = %d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "zhangsan", 20 };
//	print(&s);//结构体地址传参
//	return 0;
//}
