#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define MAX 10
#define PRINT(MAX) printf("��������Ϣ(char c[#MAX]��\n",MAX) 
//��������
typedef struct LNode
{
	char c[MAX];
	struct LNode *next;

}LNode;
//������ͷ���
typedef struct 
{
	int size;
	LNode *next;
}HNode;

//��ʼ������
void Initial(HNode* p) 
{	
	p->next = NULL;
	p->size=0;
}

//ͷ�巨����������
void HeadInsert(HNode *L) 
{
	char a[MAX];
	PRINT(MAX);
	scanf("%s", a);
	LNode* p = (LNode*) malloc(sizeof(LNode));
	strcpy(p->c , a);
	p->next =L->next ;
	L->next = p;
	L->size++;
}

void Display(HNode *L)
{
	LNode *p = L->next;
	printf("�����ܽ������%d\n", L->size);
	while (p) 
	{
		printf("%s\n", p->c);
		p = p->next;
	}
}

void Del(HNode *L)
{
	LNode *p = L->next;
	LNode *s=NULL;
	printf("��������Ҫ���ҵĽ����Ϣ��\n");
	char a[MAX];
	PRINT(MAX);
	scanf("%s", a);
	while (p)
	{

		if (!strcmp(p->c, a))
		{
			if (p == L->next)
			{
				L ->next = p->next;
				free(p);
				return;
			}
			else 
			{
				s->next = p->next;
				free(p);
				return;
			}
		}
		s = p;
		p = p->next;
		
	}
}

int main() 
{
	HNode *L = NULL;//ͷָ��ָ��ͷ���
	L = (HNode*)malloc(sizeof(HNode));
	Initial(L);
	int i=10;
	for (i = 0; i < 10; i++)
	{
		HeadInsert(L);//ͷ�巨����һ�����
	}
	Display(L);//��ӡ���н�����Ϣ
	Del(L);
	Display(L);
	return 0;
}