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
	if (p->size == MAX-1) printf("ͨѶ¼�������޷�����!\n");
	else
	{
		printf("����������:>\n");
		scanf("%s", p->people[p->size].name);
		printf("������绰:>\n");
		scanf("%s", p->people[p->size].tele);
		
		printf("*********************************************\n");
		printf("����	�绰	\n");
		printf("%s	%s	\n", p->people[p->size].name, p->people[p->size].tele);
		p->size++;
	}
}


void show(Contact *p) 
{
	printf("���	����	�绰	\n");
	for (int i = 0; i < p->size; i++)
	{
		printf("%d	%s	%s	\n", i,p->people[i].name, p->people[i].tele);
	}    
}


void del(Contact *p)
{
	printf("������Ҫɾ������ϵ�˵�����:>\n");
	char name[MAX_NAME];
	scanf("%s", name);	
	int i = find(p, name);
	if (i >= 0)
	{
		printf("Ҫɾ������ϵ��:>\n");
		printf("���	����	�绰	\n");
		printf("%d	%s	%s	\n", i, p->people[i].name, p->people[i].tele);
		int j;
		for (j = i; j < p->size; j++)
		{
			memcpy(p->people[ j ].name, p->people[j+1].name, sizeof(p->people[j +1 ].name));
			memcpy(p->people[ j ].tele, p->people[j +1 ].tele, sizeof(p->people[j +1 ].tele));			
		}
		p->size--;
		printf("ɾ�����ͨѶ¼:>\n");
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
	//дͨѶ¼�����ݵ��ļ���
	fwrite(&(p->size), sizeof(int), 1, pfWrite);
	int i = 0;
	for (i = 0; i <= p->size; i++)
	{
		fwrite(&(p->people[i]), sizeof(People), 1, pfWrite);
	}
	printf("����ɹ�\n");
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
		printf("û�и���ϵ��\n");
		return -1;
	}
	return i;
}

void search(Contact *p)
{
	printf("������Ҫ���ҵ���ϵ�˵�����:>\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (!strcmp(p->people[i].name, name)) break;
	}
	if (i == p->size)
	{
		printf("û�и���ϵ��\n");
		return;
	}
	printf("���	����	�绰	\n");
	printf("%d	%s	%s	\n", i, p->people[i].name, p->people[i].tele);
}
void modify(Contact *p)
{
	printf("������Ҫ�޸ĵ���ϵ�˵�����:>\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = find(p, name);
	if (i >= 0)
	{
		printf("�������޸ĺ������:>\n");
		scanf("%s", p->people[i].name);
		printf("�������޸ĺ�ĵ绰:>\n");
		scanf("%s", p->people[i].tele);
		printf("�޸ĳɹ�:>\n");
		printf("*********************************************\n");
		printf("����	�绰	\n");
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
	
	printf("����ɹ�\n");
	save(p);
	show(p);
}