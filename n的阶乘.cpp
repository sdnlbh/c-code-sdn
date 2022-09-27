#include<stdio.h>

int ChristianKramp(int n)
{
	int j = 1;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * ChristianKramp(n - 1);
	}
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int N = ChristianKramp(n);
	printf("%d", N);
	return 0;
}