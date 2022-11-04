#include<stdio.h>
#include<string.h>

enum sex
{
	male,
	female,
	secret
};

typedef struct student
{
	char name[20];
	int age;
	char sex[20];
}student;


typedef struct sz
{
	char a;
	int b;
	char c;
}sz;

int judge()//联合体判断大小端方法
{
	union j//利用了共同使用统一内存的特点
	{
		char a;
		int b;
	};
	union j x;
	x.b = 1;
	return x.a;
}


int main()
{
	enum sex sdn = male;
	printf("%d\n", sdn);//枚举出来的类型是整形数据
	student s = { "sdn",20,"male"};
	printf("%s %d %s\n", s.name, s.age, s.sex);//结构体打印
	printf("%d\n",(int) sizeof(s));
	sz n = { "a",1,"c"};
	printf("%d\n", (int)sizeof(n));//结构体内存对齐
	int j = judge();
	if (j == 1)
		printf("小端");
	if (j == 0)
		printf("大端");
	return 0;
}