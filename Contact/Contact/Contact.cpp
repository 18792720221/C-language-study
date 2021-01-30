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
	if (p->size == MAX) printf("ͨѶ¼�������޷�����!\n");
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
	int i=0;
	for (i = 0; i <= p->size; i++)
	{
		if (strcmp(p->people[i].name, name)) break;
		i++;
	}
	if (i == p->size)
	{
		printf("û�и���ϵ��\n");
		return;
	}
	else 
	{
		printf("Ҫɾ������ϵ��:>\n");
		printf("���	����	�绰	\n");
		printf("%d	%s	%s	\n", i, p->people[i].name, p->people[i].tele);
		int j;
		for (j = i; j < p->size; j++)
		{
			memcpy(p->people[j + 1].name , p->people[j].name,sizeof(p->people[j + 1].name));
			p->size--;
		}
	}
	printf("ɾ�����ͨѶ¼:>\n");
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
	//дͨѶ¼�����ݵ��ļ���
	int i = 0;
	for (i = 0; i <= p->size; i++)
	{
		fwrite(&(p->people[i]), sizeof(People), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}