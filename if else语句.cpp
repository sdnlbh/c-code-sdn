#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int s = 0;
	printf("���������ϻ������ϣ�(1/0)>:");
	scanf("%d", &s);
	if (s == 1)
	    printf("���Ϻ�\n");
	else
		printf("��\n");
	return 0;
}