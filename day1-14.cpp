#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//野指针
int main()
{
	int arr[10] = { 0 };
	int *p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针
		*(p++) = i;
	}
	return 0;
}
//int *test() 
//{
//	int a=10;
//	return &a;
//}
//int main()
//{
//	int *pa=NULL;
//	pa = test();
//	*pa = 100;
//	printf("%d\n", *pa);
//	return 0;
//}

//隐式类型转换和整型提升
//复杂表达式的求值有三个影响的因素。
//1. 操作符的优先级
//2. 操作符的结合性
//3. 是否控制求值顺序。

//int main()
//{
//	int c = 0;
//	int a;
//	a = c + --c;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//int main()
//{
//	char a = 3;
//	//int ->char 00000000000000000000000000000011->00000011
//	char b = 127;
//	//int ->char 00000000000000000000000001111111->01111111
//	char c = a + b;
//	//char->int+char->int=int ->char   00000000000000000000000000000011+00000000000000000000000001111111=00000000000000000000000010000010->10000010
//	printf("%d\n", c);
//	//char ->int  10000010 ->11111111111111111111111110000010
//	int d = 0xFFFFFF82;
//	printf("%d\n", d);
//	return 0;
//}

//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//}
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;//结构成员访问
//}
//int main()
//{
//	Stu stu;
//	Stu* pStu = &stu;//结构成员访问
//
//	stu.age = 20;//结构成员访问
//	set_age1(stu);
//	printf("%d\n", stu.age);
//	pStu->age = 20;//结构成员访问
//	set_age2(pStu);
//	printf("%d\n", stu.age);
//	return 0;
//}


//int main() 
//{
//	int a = 1;
//	int b = 2,c=3,d=-1;
//	if (a = b + 1, c = a / 2, d > 0) a = 0;
//	
//	//int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式从左到右依次执行
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//&&计算完左边为假后，右边不再计算；
//	//i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)//4
//}
//void test2(char ch[])//ch为指针
//{
//	printf("%d\n", sizeof(ch));//(4)//1
//}
//int main()
//{
//	char ch[10] = { 0 };
//	int arr[10] = { 0 };
//	
//	printf("%d\n", sizeof(arr));//(1)//40
//	printf("%d\n", sizeof(ch));//(3)//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}




//int main() 
//{
//	int a;
//	printf("%d\n", sizeof (int));
//	printf("%d\n", sizeof a);
//	return 0;
//}



////求一个整数存储在内存中的二进制中1的个数。
//int main()
//{
//	int num = 126;
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}


////求一个整数存储在内存中的二进制中1的个数。
//int main()
//{
//	int i,a,b,count=0;
//	a = -7856;
//	b = 1;
//	for (i = 0; i < 32; i++)
//	{
//		count += a & b;
//		a=a >> 1;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//int main()
//{
//	//不能创建临时变量（第三个变量），实现两个数的交换
//	int a=10, b=20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	printf("%d	%d\n", a, b);
//	return 0;
//}