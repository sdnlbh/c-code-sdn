#include<stdio.h>

int check()
{
	int a = 1;//00000000000000000000000000000001
	return *(char*)&a;//ǿ������ת��Ϊcharʹÿ�μ���Ϊһ���ֽ�
}

int main()
{
	int b = 1;
	if (check() == 1)
	{
		printf("С��");//���ݵ�λ�ڵ͵�ַ
	}
	else
	{
		printf("���");//���ݸ�λ�ڵ͵�ַ
	}
	return 0;
}