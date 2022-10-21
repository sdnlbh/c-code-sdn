#include<stdio.h>


int main()//利用ascll码值对字符操作a-97 A-65
{
	char a;
	printf("请输入你要转化的字母:>");
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
		printf("输入错误");
	
	return 0;
}