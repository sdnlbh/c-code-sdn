#include<stdio.h>

int check(int x, int y)
{
	int count = 0;
	int c = x ^ y;//��ͬΪ0����Ϊ1
	while (c)//��1�ĸ���
	{
		c = c & (c - 1);  
		count++;
	}
	return count;
}

int main()   
{   
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	printf("%d", check(a, b));

	return 0;
}