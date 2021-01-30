#include "Contact.h"

void menu(void) 
{
	printf("*********************************************\n");
	printf("	0.exit			1.add	\n");
	printf("	2.del			3.search	\n");
	printf("	4.modify		5.show	\n");
	printf("	7.sort			8.save	\n");
	printf("*********************************************\n");	
}

void Initcontact(Contact *p) 
{
	memset(p->people, 0, sizeof(p->people));
	p->size = 0;
}


void add(Contact *p)
{
	if (p->size == MAX) printf("通讯录已满，无法增加!\n");
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", p->people[p->size].name);
		printf("请输入电话:>\n");
		scanf("%s", p->people[p->size].tele);
		
		printf("*********************************************\n");
		printf("名字	电话	\n");
		printf("%s	%s	\n", p->people[p->size].name, p->people[p->size].tele);
		p->size++;
	}
}


void show(Contact *p) 
{
	printf("序号	名字	电话	\n");
	for (int i = 0; i < p->size; i++)
	{
		printf("%d	%s	%s	\n", i,p->people[i].name, p->people[i].tele);
	}    
}


void del(Contact *p)
{
	printf("请输入要删除的联系人的名字:>\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int i=0;
	for (i = 0; i <= p->size; i++)
	{
		if (strcmp(p->people[i].name, name)) break;
		i++;
	}
	if (i == p->size)
	{
		printf("没有该联系人\n");
		return;
	}
	else 
	{
		printf("要删除的联系人:>\n");
		printf("序号	名字	电话	\n");
		printf("%d	%s	%s	\n", i, p->people[i].name, p->people[i].tele);
		int j;
		for (j = i; j < p->size; j++)
		{
			memcpy(p->people[j + 1].name , p->people[j].name,sizeof(p->people[j + 1].name));
			p->size--;
		}
	}
	printf("删除后的通讯录:>\n");
	show(p);
}
void save(Contact *p)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//写通讯录中数据到文件中
	int i = 0;
	for (i = 0; i <= p->size; i++)
	{
		fwrite(&(p->people[i]), sizeof(People), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}