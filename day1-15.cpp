#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
typedef struct Stu 
{
	char name[20];
	int age;
}Stu;
void print(struct Stu* ps)
{
	printf("name = %s   age = %d\n", (*ps).name, (*ps).age);
	//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
	printf("name = %s   age = %d\n", ps->name, ps->age);
}
int main()
{
	struct Stu s = { "zhangsan", 20 };
	print(&s);//�ṹ���ַ����
	return 0;
}