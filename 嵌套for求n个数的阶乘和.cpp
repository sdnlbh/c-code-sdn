#include<stdio.h>

int main()
{
	int n, a, b;
	int d = 0;
	int c = 1;
	scanf_s("%d", &n);
	for (a = 1; a <= n; a++)
	{       c=1;
		for (b = 1; b <= a; b++)
		{

			c = c * b;
		}
		d = d + c;

	}
	printf("%d", d);






	return 0;
}
