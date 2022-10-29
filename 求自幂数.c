#include<stdio.h>
#include<math.h>

void findnum()
{
	int i = 0;
	for (i = 0; i < 10000; i++)
	{
		int tmp = i;
		int count = 1;//开始位为1
		int sum = 0;
		while(tmp /= 10)//计算位数
		{
			count++;
		}
		tmp = i;
		while (tmp)//判断自幂数
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		if (i == sum && i != 0)
		{
			printf("%d ", i);
		}

	}
}



int main()
{
	findnum();
	return 0;
}