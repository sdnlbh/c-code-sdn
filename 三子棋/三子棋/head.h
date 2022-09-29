#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>


void game(char arr[ROW][COL], int row, int col);
void rebuid(char arr[ROW][COL], int row, int col);
void print(char arr[ROW][COL], int row, int col);
void move1(char arr[ROW][COL], int row, int col);
void move2(char arr[ROW][COL], int row, int col);
int judge1(char arr[ROW][COL], int row, int col);
int judge2(char arr[ROW][COL], int row, int col);
int full(char arr[ROW][COL], int row, int col);
