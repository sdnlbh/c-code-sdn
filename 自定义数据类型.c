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

int judge()//�������жϴ�С�˷���
{
	union j//�����˹�ͬʹ��ͳһ�ڴ���ص�
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
	printf("%d\n", sdn);//ö�ٳ�������������������
	student s = { "sdn",20,"male"};
	printf("%s %d %s\n", s.name, s.age, s.sex);//�ṹ���ӡ
	printf("%d\n",(int) sizeof(s));
	sz n = { "a",1,"c"};
	printf("%d\n", (int)sizeof(n));//�ṹ���ڴ����
	int j = judge();
	if (j == 1)
		printf("С��");
	if (j == 0)
		printf("���");
	return 0;
}