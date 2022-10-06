#pragma once
#include<stdio.h>//库函数声明
#include<stdlib.h>
#include<time.h>
#include<windows.h>


#define ROW 9//常量定义
#define COL 9
#define ROWS 11
#define COLS 11

void menu();//函数声明
void game();
void init(char arr[ROWS][COLS], int row, int col,char set);
void print(char arr[ROWS][COLS], int row, int col);
void boom(char arr[ROWS][COLS],int row, int col);
int act(char arr[ROWS][COLS], char arr2[ROWS][COLS], int row, int col);
void nt(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col, int x, int y);
int iswin(char arr[ROWS][COLS], int row, int col);