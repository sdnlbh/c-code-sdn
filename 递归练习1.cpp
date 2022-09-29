#include<stdio.h>

void print(int a)
{
	if (a > 9)
	{
		print(a / 10);

	}
	printf("%d ", a % 10);
}


int main()
{
	int s = 0;
	scanf_s("%d",&s);
	print(s);

	return 0;
}