#include<stdio.h>

int check(int x)//�������м���1
{
	int count = 0;
	while (x)
	{
		x = x & (x - 1);
		count++;
	}
	return count;
}

int main()
{
	int x = 0;
	scanf_s("%d", &x);
	printf("%d", check(x));
	return 0;
}