#include<stdio.h>

int way(int n)
{
	int a = 1;
	int b = 1;
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return way(n - 1) + way(n - 2);
	}
	

}

int main()
{
	int n = 0;
	int N = 0;
	scanf_s("%d", &n);
	 N = way(n);
	printf("方法总数%d", N);

	return 0;

}