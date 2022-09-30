#include<stdio.h>


int main()
{
	int n = 0;
	int count = 0;
	for (n = 1000; n <= 2000; n++)//年份段
	{
		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)//1.判断条件能被4整除不能被100整除  2.能被400整除
		{
			printf("%d ", n);
			count++;//计数器
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}