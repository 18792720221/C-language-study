#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<errno.h>


////struct {
////	int a;
////	char c;
////}* p;//匿名指针不能用于指向匿名结构体
//struct s1 {
//	char c1;
//	int a;
//	char c2;
//};
//struct s2 {
//	char c1;
//	char c2;
//	int a;
//};
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//
////#pragma pack(4)//设置对齐数
//struct s4 
//{
//	char c1;
//	struct s3 s3;
//	double d;
//};
////#pragma pack()//取消设置的默认数
//
//int main()
//{
//	struct s1 s1 = { 0 };
//	printf("%d	", sizeof(s1));
//	struct s2 s2 = { 0 };
//	printf("%d	", sizeof(s2));
//	struct s4 s4 = { 0 };
//	printf("%d	", sizeof(s4));
//
//	return 0;
//}
////柔性数组的地址+1问题
//typedef struct s {
//	int a;
//	char c;
//	char arr[];
//}s;
//
//int main() 
//{
//	s*p =NULL;
//	s*temp = (s*)malloc(sizeof(s) + 5 * sizeof(char));
//	if (temp) printf("%s\n", strerror(errno));
//	p = temp; temp = NULL;
//	*p = { 0 };
//	s*p2 = p + 1;
//	printf("%d\n", sizeof(s));
//	printf("%p\n", p);
//	printf("%p\n", p2);
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

#include<stdio.h>

//int main() 
//{
//	int a=10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
int main() 
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d,%d", a, b);
	return 0;
}