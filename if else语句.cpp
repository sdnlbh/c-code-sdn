#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int s = 0;
	printf("现在是早上还是晚上？(1/0)>:");
	scanf("%d", &s);
	if (s == 1)
	    printf("早上好\n");
	else
		printf("晚安\n");
	return 0;
}