#include<stdio.h>

int check()
{
	int a = 1;//00000000000000000000000000000001
	return *(char*)&a;//强制类型转换为char使每次检索为一个字节
}

int main()
{
	int b = 1;
	if (check() == 1)
	{
		printf("小端");//数据地位在低地址
	}
	else
	{
		printf("大端");//数据高位在低地址
	}
	return 0;
}