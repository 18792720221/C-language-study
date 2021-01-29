#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define MAX 1000
typedef struct people
{
	char name[5];
	char tele[12];
}people;
struct elem
{
	struct people;
	int size;
};
struct s 
{
	int a;
	int b;
};
typedef struct elem  elem;
void menu(void );
void add(elem contact);
