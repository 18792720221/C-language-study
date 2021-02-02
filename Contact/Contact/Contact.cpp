#include "Contact.h"

void menu(void) 
{
	printf("*********************************************\n");
	printf("	0.exit			1.add	\n");
	printf("	2.del			3.search	\n");
	printf("	4.modify		5.show	\n");
	printf("	6.sort			7.save	\n");
	printf("*********************************************\n");	
}

void Initcontact(Contact *p) 
{
	*p = { 0 };
}
int  find(const Contact *p, const char name[MAX_NAME]);

void add(Contact *p)
{
	if (p->size == MAX-1) printf("通讯录已满，无法增加!\n");
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
	int i = find(p, name);
	if (i >= 0)
	{
		printf("要删除的联系人:>\n");
		printf("序号	名字	电话	\n");
		printf("%d	%s	%s	\n", i, p->people[i].name, p->people[i].tele);
		int j;
		for (j = i; j < p->size; j++)
		{
			memcpy(p->people[ j ].name, p->people[j+1].name, sizeof(p->people[j +1 ].name));
			memcpy(p->people[ j ].tele, p->people[j +1 ].tele, sizeof(p->people[j +1 ].tele));			
		}
		p->size--;
		printf("删除后的通讯录:>\n");
		show(p);
		save(p);
	}
	
}
void save(Contact *p)
{
	FILE* pfWrite = fopen("contact.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//写通讯录中数据到文件中
	fwrite(&(p->size), sizeof(int), 1, pfWrite);
	int i = 0;
	for (i = 0; i <= p->size; i++)
	{
		fwrite(&(p->people[i]), sizeof(People), 1, pfWrite);
	}
	printf("保存成功\n");
	fclose(pfWrite);
	pfWrite = NULL;
	
}
void Load(Contact *p) 
{
	FILE*pf = fopen("contact.txt", "r");
		if (pf == NULL) printf("%s\n", strerror(errno));
		else
		{
			fread(&p->size, 1, sizeof(int), pf);
			int i = 0;
			for (i = 0; i < 10; i++)
			{
				fread(&p->people[i], 1, sizeof(People), pf);
			}
		}
		fclose(pf);
		pf = NULL;
}
 int static find(const Contact *p, const char name[MAX_NAME])
{
	
	int i = 0;
	for (i = 0; i <p->size; i++)
	{
		if (!strcmp(p->people[i].name,name)) break;
	}
	if (i == p->size)
	{
		printf("没有该联系人\n");
		return -1;
	}
	return i;
}

void search(Contact *p)
{
	printf("请输入要查找的联系人的名字:>\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (!strcmp(p->people[i].name, name)) break;
	}
	if (i == p->size)
	{
		printf("没有该联系人\n");
		return;
	}
	printf("序号	名字	电话	\n");
	printf("%d	%s	%s	\n", i, p->people[i].name, p->people[i].tele);
}
void modify(Contact *p)
{
	printf("请输入要修改的联系人的名字:>\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = find(p, name);
	if (i >= 0)
	{
		printf("请输入修改后的名字:>\n");
		scanf("%s", p->people[i].name);
		printf("请输入修改后的电话:>\n");
		scanf("%s", p->people[i].tele);
		printf("修改成功:>\n");
		printf("*********************************************\n");
		printf("名字	电话	\n");
		printf("%s	%s	\n", p->people[i].name, p->people[i].tele);
	}
	save(p);
}


void sort(Contact *p) 
{
	int i, j,flag=1;
	People Temp = {0};
	People *temp = &Temp;
	
	
		for (i = 0; i < p->size-1; i++)
		{
			flag = 0;
			for (j = 0;j < p->size-i-1; j++)
				if (strcmp(p->people[j].name, p->people[j+1].name) > 0)
				{
					memcpy(temp, &p->people[j], sizeof(People));
					memcpy(&p->people[j], &p->people[j+1], sizeof(People));
					memcpy(&p->people[j + 1], temp, sizeof(People));
					flag = 1;
				}
			if (flag == 0)  break;
		}
	
	printf("排序成功\n");
	save(p);
	show(p);
}