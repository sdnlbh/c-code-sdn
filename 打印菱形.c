#include<stdio.h>

void print(int line)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < line; i++)//打印上半部分
	{
		
		for (j = 0; j <line-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < line - 1; i++)//打印下半部分
	{
		for (j = 0; j <i+1 ; j++)
		{
			printf(" ");
		}

		for (j = 0; j <2*(line - 1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}



int main()
{  
	int line = 0;
	scanf_s("%d", &line);//输入打印行菱形的上半行数
	print(line);
	return 0;
}