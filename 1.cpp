#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//goto ���
//int main() {
//	char input[10] = { 0 };
//	
//again:
//	system("shutdown -s -t 60");
//	printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ���\n������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
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


//continue break ���
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
//				i++;//ע��i++��continue�����λ�ã����ܳ�����ѭ����
//		if (i == 5) continue;
//		printf("%d\n", i);
//	};
//		return 0;
//}
//case ���
//int main() {
//	int day;
//	printf("���������ڼ� ���֣�");
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
//	default: printf("����\n");//default ���Ӧ����switch ���һ����֧֮����ֻ����һ����
//	}
//
//		return 0;
//}

////�ṹ��
//int main() {
//	struct stu {
//		char name[20];
//		int age;
//		char sex[5];
//		char id[15];
//	};
//	struct stu s = { "����",20,"��","20180101" };
//	printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);
//	return 0;
//}

////ָ����÷� ָ�������С�̶���������λ����ͬ
//int main() {
//	int num = 10;
//	&num;
//	printf("%p\n", &num);
//	int *p = &num;
//	printf("%p	%d\n", p, p);
//	printf("%d\n", p);
//	return 0;
//}

//�����ؼ��� auto break case char const continue default do double else enum extern
//float for goto if int long register return short signed sizeof static struct typedef 
//union unsigned void volatile while
//typedef unsigned int u_int; //����������
//static ���α����ͺ���
//���κ�����ȫ�ֱ���ʱֻ���ڱ�Դ�ļ�����
//void test()
//{
//	int i = 0;
//	i++;
//	static int a = 0;//static ���ξֲ�����ʹÿ�����½��벻����������
//		a++;
//		printf("%d	%d\n", i, a);
//	}
//int main() {
//	int j = 0;
//	for (j = 0; j < 10; j++) test();
//	
//}
//������
//���������� + - * / %
//��λ������  >>  <<
//λ������ & ^ (���)|
//��ֵ������ = += &= >>=
//��Ŀ������ �� - + &��ȡ��ַ��sizeof (���������ͳ��� �ֽ�) 
//~(�����ư�λȡ��) *��������ȡ��ַ����Ԫ�أ�
//���������� exp?exp2:exp30
//int main() {
//	int a = 1 ^ 0;
//	printf("%d\n", a);
//	a = a << 2;
//	printf("%d\n", a);
//	a ^= 2;//a=4^2
//	printf("%d\n", a);
//	int b=8,c;
//	a > b ? c = 0 : c = 1;//����������
//
//	printf("%d\n", c);
//	return 0;
//}

//��������
//int add(int a, int b) {
//	return a + b;
//}
//int main() {
//	int num1, num2, sum1,sum2;
//	printf("��������������:>\n");
//	scanf_s("%d %d", &num1, &num2);
//	sum1 = num1 + num2;
//	sum2 = add(num1, num2);
//	printf("��Ϊ��%d	%d", sum1, sum2);
//	return 0;
//}
//ѭ�����
//int main() {
//	printf("�������\n");
//	int prize=0, six=0,i=0;
//	while (prize == 0 && six == 0) {
//		printf("Ŭ��ѧϰ����ø�ǿ\n");
//		i++;
//		if (i > 10000) six = 1;
//		int a = rand();
//		if (a == 999) prize = 1;
//	};
//	printf("����Ӯ��\n");
//	printf("%d %d", prize, six);
//return 0;
//}


//int main()
//{
//	printf("������غ����ѡ��ѡ��Ŭ����1��ѡ��ѧϰ��2\n");
//	int a;
//	scanf_s("%d", &a);
//	if (a == 1 || a == 2)
//	{
//		if (a == 1) printf("���õ�һ���ù�����");
//		else printf("�ؼ�������");
//	}
//	else
//		printf("�������");
//
//	return 0;
//}

////�����ַ����� strlen
//int main() {
//	/*int a = 0;
//	char str[] = "abcdef";
//	a = strlen(str);
//	printf("%d", a);*/
//printf("%d\n",strlen("abcdef"));
//printf("%d\n",strlen("c:\test\328\test.c"));
//return 0;
//}

//��ӡc:\code\test.c\n
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
//ת���ַ� \? \' \" \\ \a \b \f \n \r \t \v \ddd \xdd
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