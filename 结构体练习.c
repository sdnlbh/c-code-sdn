#include<stdio.h>

typedef struct hobbit//�ض���
{

	char a[20];
	char b[20];
	char c[20];
}hobbit;

struct student//ֱ�Ӷ���
{
	char name[10];
	int age;
	char number[20];
	hobbit a;

};



void print(struct student tem)//��ֵ
{
	printf("name=%s\n", tem.name);
	printf("age=%d\n", tem.age);
	printf("number=%s\n", tem.number);
	printf("a=%s ", tem.a.a);
	printf("a=%s ", tem.a.b);
	printf("a=%s\n\n", tem.a.c);

}

void print2(struct student* tem)//��ַ
{
	printf("name=%s\n", tem->name);
	printf("age=%d\n", tem->age);
	printf("number=%s\n", tem->number);
	printf("a=%s ", tem->a.a);
	printf("b=%s ", tem->a.b);
	printf("c=%s", tem->a.c);
}


int main()
{
	struct student sdn = { "sdn",20,"114514",{"play","sleep","eat"} };//Ƕ�׸�ֵ
	print(sdn);
	print2(&sdn);
	return 0;
}