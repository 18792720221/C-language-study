#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("arr+1 = %p\n", &arr + 1);
//	return 0;
//}//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��int (*p)[5]
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5);
//	return 0;
//}//
//void test(char **p) 
//{
//}
//int main()
//{
//	char c = 'b';
//	char*pc = &c;
//	char**ppc = &pc;
//	char* arr[10];
//	return 0;
//}//int main() //{//	(*(void(*)())0)();//void(*)()Ϊָ��һ��������ָ�����ͣ������ķ�������Ϊvoid�������޲�����//				  //�ٶ�0����ǿ������ת��Ϊvoid(*)()���͵�ָ��//				  //�ٶ�ָ����н����ã����ú���//	void(*signal(int, void(*)(int)))(int);//signal��һ���������������һ��ʱint,һ���Ǻ���ָ��;//	                                      //�ú���ָ��ָ��ĺ������������int,����������void;//signal �����ķ���������һ������ָ�룬�ú���ָ��ָ��ĺ������������int,����������void;//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);//}//int Add( int a, int b)
//{
//	return a + b;//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, Add, sub, mul, Div }; //ת�Ʊ�
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add           2:sub \n");
//		printf(" 3:mul           4:Div \n");
//		printf("*************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("��������\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//4
//	printf("%d\n", sizeof(*a));//4�˴�������Ϊ��Ԫ��
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//4
//	printf("%d\n", sizeof(&a[0]));//4
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	return 0;
//}
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//1
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));}