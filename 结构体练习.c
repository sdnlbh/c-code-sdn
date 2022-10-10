#include<stdio.h>

typedef struct hobbit//重定义
{

	char a[20];
	char b[20];
	char c[20];
}hobbit;

struct student//直接定义
{
	char name[10];
	int age;
	char number[20];
	hobbit a;

};



void print(struct student tem)//传值
{
	printf("name=%s\n", tem.name);
	printf("age=%d\n", tem.age);
	printf("number=%s\n", tem.number);
	printf("a=%s ", tem.a.a);
	printf("a=%s ", tem.a.b);
	printf("a=%s\n\n", tem.a.c);

}

void print2(struct student* tem)//传值
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
	struct student sdn = { "sdn",20,"114514",{"play","sleep","eat"} };嵌套赋值
	print(sdn);
	print2(&sdn);
	return 0;
}
