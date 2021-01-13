#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define ROW 9 
#define COL 9
#define WIDTH 1
#define ROWS ROW+WIDTH*2
#define COLS COL+WIDTH*2
#define COUNT 15

void menu();
void game(char mine[ROWS][COLS], char show[ROWS][COLS]);
void initial(char board[ROWS][COLS],char set);
void display(char board[ROWS][COLS]);
void put(char board[ROWS][COLS]);
void find(char mine[ROWS][COLS], char show[ROWS][COLS]);
void num (char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int count);