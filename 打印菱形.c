#include<stdio.h>

void print(int line)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < line; i++)//��ӡ�ϰ벿��
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

	for (i = 0; i < line - 1; i++)//��ӡ�°벿��
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
	scanf_s("%d", &line);//�����ӡ�����ε��ϰ�����
	print(line);
	return 0;
}