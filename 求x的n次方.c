#include<stdio.h>

double pow(int x, int n)//负次方出现小数的情况
{
	if (n == 0)//0次方统一为0
	{
		return 1;
	}
	else if (n < 0)
	{
		return (1.0/(pow(x, -n)));//对于负次方的运算，倒数转换
	}
	else//n>0时
	{
		return x * pow(x, n - 1);
	}
}

int main()
{
	int x = 0;
	int n = 0;
	scanf_s("%d%d", &x ,& n);
	double y = pow(x, n);
	printf("%lf", y);
	return 0;
}