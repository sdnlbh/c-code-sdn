#include<stdio.h>


int main()//����ascll��ֵ���ַ�����a-97 A-65
{
	char a;
	printf("��������Ҫת������ĸ:>");
	scanf_s("%c", &a,4);
	if ('a' <= a && a <= 'z')
	{
		a = a - 32;
		printf("%c", a);
	}
	else if ('A' <= a && a <= 'Z')
	{
		a = a + 32;
		printf("%c", a);
	}
	else
		printf("�������");
	
	return 0;
}