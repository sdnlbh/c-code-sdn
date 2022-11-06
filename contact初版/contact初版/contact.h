#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

enum option//ת���˵�
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

#define max 1000//���峣��
#define max_name 20
#define max_sex 6
#define max_tele 13
#define max_addr 50

struct info//��Ϣ�ṹ��
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};

struct contact//contact�ṹ��
{
	struct info data[max];
	int sz;
};


void menu();
void initcontact(struct contact* con);
void conadd(struct contact* con);
void print(struct contact* con);
void modify(struct contact* con);
void search(struct contact* con);
void delet(struct contact* con);
int cmp(const void* e1, const void* e2);