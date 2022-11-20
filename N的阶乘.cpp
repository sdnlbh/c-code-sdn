#include<stdio.h>

int main()
{
	int n = 1;
	int N = 0;
	int x = 1;
	scanf_s("%d", &N);
	for (n; n <= N; n++)
	{
		x = x * n;

	}

	printf("%d\n", x);

	return 0;
}
