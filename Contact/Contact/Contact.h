#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define MAX 1000
#define MAX_NAME 5
#define MAX_TELE 13
enum FUNC
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort,
	Save
};
typedef struct People
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
}People;
typedef struct Contact
{
	int size;
	People people[MAX];
}Contact;

void menu(void );
void Initcontact(Contact *p);
void add(Contact *p );
void show(Contact *p);
void del(Contact *p);
void save(Contact *p);