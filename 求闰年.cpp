#include<stdio.h>


int main()
{
	int n = 0;
	int count = 0;
	for (n = 1000; n <= 2000; n++)//��ݶ�
	{
		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)//1.�ж������ܱ�4�������ܱ�100����  2.�ܱ�400����
		{
			printf("%d ", n);
			count++;//������
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}