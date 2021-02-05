#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define MAX 10
#define PRINT(MAX) printf("输入结点信息(char c[#MAX]）\n",MAX) 
//单链表结点
typedef struct LNode
{
	char c[MAX];
	struct LNode *next;

}LNode;
//单链表头结点
typedef struct 
{
	int size;
	LNode *next;
}HNode;

//初始化链表
void Initial(HNode* p) 
{	
	p->next = NULL;
	p->size=0;
	FILE* pf = fopen("sqlist.txt", "r");
	if (pf == NULL) 
	{
		printf("%s\n", strerror(errno));
		return;
	}
	fread(&p->size, 1, sizeof(int), pf);
	for (int i = 0; i < p->size; i++)
	{
		LNode *s = (LNode*)malloc(sizeof(LNode));
		fread(&(s->c), 1, sizeof(MAX), pf);
		s->next = p->next;
		p->next = s;
		p->size++;
	}
	fclose(pf);
	pf = NULL;
}

//头插法建立单链表
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
	printf("链表总结点数：%d\n", L->size);
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
	printf("请输入需要查找的结点信息：\n");
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

void Save(HNode *L) 
{
	FILE*pf = fopen("sqlist.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	else
	{
		fwrite(&(L->size), sizeof(int), 1, pf);
		LNode*p = L->next;
		int i = 0;
		for (i = 0; i < L->size; i++)
		{
			
			fread(&(p->c), 1, sizeof(LNode), pf);
			p->next;
		}
	}
	fclose(pf);
	pf = NULL;

}

int main() 
{
	HNode *L = NULL;//头指针指向头结点
	L = (HNode*)malloc(sizeof(HNode));
	Initial(L);
	int i=10;
	for (i = 0; i < 10; i++)
	{
		HeadInsert(L);//头插法增加一个结点
	}
	Display(L);//打印所有结点的信息
	Del(L);
	Display(L);
	Save(L);
	return 0;
}