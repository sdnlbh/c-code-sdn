#pragma once
#include<stdio.h>//�⺯������
#include<stdlib.h>
#include<time.h>
#include<windows.h>


#define ROW 9//��������
#define COL 9
#define ROWS 11
#define COLS 11

void menu();//��������
void game();
void init(char arr[ROWS][COLS], int row, int col,char set);
void print(char arr[ROWS][COLS], int row, int col);
void boom(char arr[ROWS][COLS],int row, int col);
int act(char arr[ROWS][COLS], char arr2[ROWS][COLS], int row, int col);
void nt(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col, int x, int y);
int iswin(char arr[ROWS][COLS], int row, int col);