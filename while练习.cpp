#include <stdio.h>

int main()
{
	int num = 0;
	printf("看谁先数到100！(1)>:");
	scanf_s("%d", &num);
	while (num < 100)
	{
		num++;
		printf("%d\n", num);

	}

	return 0;
}