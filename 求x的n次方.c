#include<stdio.h>

double pow(int x, int n)//���η�����С�������
{
	if (n == 0)//0�η�ͳһΪ0
	{
		return 1;
	}
	else if (n < 0)
	{
		return (1.0/(pow(x, -n)));//���ڸ��η������㣬����ת��
	}
	else//n>0ʱ
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