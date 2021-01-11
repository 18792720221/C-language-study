#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define ROW 3
#define COL 3
void game(char board[ROW][COL], int row,int col);
void Initial(char board[ROW][COL], int row, int col);
void Display(char board[ROW][COL], int row, int col);
void Player(char board[ROW][COL], int row, int col);
char Judge(char board[ROW][COL], int row, int col);
void Cmp(char board[ROW][COL], int row, int col);