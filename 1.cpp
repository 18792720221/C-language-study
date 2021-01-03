#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//goto 语句
//int main() {
//	char input[10] = { 0 };
//	
//again:
//	system("shutdown -s -t 60");
//	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机！\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



//int main() {
//	int i = 0;
//	do {
//		printf("%d\n", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}


//int main()
//{
//	int i = 0, j=0,k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		j++;
//		printf("%d", j);
//	};
//	return 0;
//}


//continue break 语句
//int main() {
//	int i = 0;
//	for (i; i <= 10; i++)
//	{
//		if (i == 5) break;
//		printf("%d\n", i);
//	};
//	i = 0;
//	for (i; i <= 10; i++)
//	{
//		if (i == 5) continue;
//		printf("%d\n", i);
//	};
//	return 0;
//}
//int main() {
//	int i=0;
//	printf("break:\n");
//	while (i < 10) {
//		if (i == 5)break;
//		printf("%d\n", i);
//		i++;
//	};
//	printf("continue:\n");
//	i = 0;
//	while (i < 10) {
//				i++;//注意i++和continue的相对位置，可能出现死循环。
//		if (i == 5) continue;
//		printf("%d\n", i);
//	};
//		return 0;
//}
//case 语句
//int main() {
//	int day;
//	printf("请输入星期几 数字：");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	
//	case 6:
//	case 7:
//		printf("weekend\n");
//	default: printf("错误\n");//default 语句应放在switch 最后一个分支之后，且只能有一个。
//	}
//
//		return 0;
//}

////结构体
//int main() {
//	struct stu {
//		char name[20];
//		int age;
//		char sex[5];
//		char id[15];
//	};
//	struct stu s = { "张三",20,"男","20180101" };
//	printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);
//	return 0;
//}

////指针的用法 指针变量大小固定，与计算机位数相同
//int main() {
//	int num = 10;
//	&num;
//	printf("%p\n", &num);
//	int *p = &num;
//	printf("%p	%d\n", p, p);
//	printf("%d\n", p);
//	return 0;
//}

//常见关键字 auto break case char const continue default do double else enum extern
//float for goto if int long register return short signed sizeof static struct typedef 
//union unsigned void volatile while
//typedef unsigned int u_int; //类型重命名
//static 修饰变量和函数
//修饰函数和全局变量时只能在本源文件引用
//void test()
//{
//	int i = 0;
//	i++;
//	static int a = 0;//static 修饰局部变量使每次重新进入不会重新声明
//		a++;
//		printf("%d	%d\n", i, a);
//	}
//int main() {
//	int j = 0;
//	for (j = 0; j < 10; j++) test();
//	
//}
//操作符
//算术操作符 + - * / %
//移位操作符  >>  <<
//位操作符 & ^ (异或)|
//赋值操作符 = += &= >>=
//单目操作符 ！ - + &（取地址）sizeof (操作数类型长度 字节) 
//~(二进制按位取反) *（解引用取地址所存元素）
//条件操作符 exp?exp2:exp30
//int main() {
//	int a = 1 ^ 0;
//	printf("%d\n", a);
//	a = a << 2;
//	printf("%d\n", a);
//	a ^= 2;//a=4^2
//	printf("%d\n", a);
//	int b=8,c;
//	a > b ? c = 0 : c = 1;//条件操作符
//
//	printf("%d\n", c);
//	return 0;
//}

//函数调用
//int add(int a, int b) {
//	return a + b;
//}
//int main() {
//	int num1, num2, sum1,sum2;
//	printf("输入两个操作数:>\n");
//	scanf_s("%d %d", &num1, &num2);
//	sum1 = num1 + num2;
//	sum2 = add(num1, num2);
//	printf("和为：%d	%d", sum1, sum2);
//	return 0;
//}
//循环语句
//int main() {
//	printf("加入比特\n");
//	int prize=0, six=0,i=0;
//	while (prize == 0 && six == 0) {
//		printf("努力学习，变得更强\n");
//		i++;
//		if (i > 10000) six = 1;
//		int a = rand();
//		if (a == 999) prize = 1;
//	};
//	printf("人生赢家\n");
//	printf("%d %d", prize, six);
//return 0;
//}


//int main()
//{
//	printf("加入比特后，你的选择？选择努力扣1，选择不学习扣2\n");
//	int a;
//	scanf_s("%d", &a);
//	if (a == 1 || a == 2)
//	{
//		if (a == 1) printf("你会得到一个好工作！");
//		else printf("回家卖红薯！");
//	}
//	else
//		printf("输入错误");
//
//	return 0;
//}

////计算字符个数 strlen
//int main() {
//	/*int a = 0;
//	char str[] = "abcdef";
//	a = strlen(str);
//	printf("%d", a);*/
//printf("%d\n",strlen("abcdef"));
//printf("%d\n",strlen("c:\test\328\test.c"));
//return 0;
//}

//打印c:\code\test.c\n
//int main() {
//	printf("c:\code\test\n");
//	printf("c:\\code\\test\\n");
//	return 0;
//}
//int main() {
//	int a = '\123';
//
//	printf("%d\n",a);
//	return 0;
//}
//转义字符 \? \' \" \\ \a \b \f \n \r \t \v \ddd \xdd
//int main() {
//	int i;
//	char arr[] = { '\?','\'','\"','\\','\a','\b','\f','\n','\r','\t','\v','\123','\x12' };
//	for (i = 0; i < 11; i++)
//	printf("%d=%c\n", i,arr[i]);
//	printf("%d%d", arr[12], arr[13]);
//	return 0;
//	
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b','i','t' };
//	char arr3[] = { 'b','i','t','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}