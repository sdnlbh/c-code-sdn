#include<stdio.h>

int sz(char arr[])
{
	int count = 0;
	while (*arr != 0)//��arr�����û�ȡ��ǰ��һλԪ�ص�ֵ
	{
		count++;
		arr++;
		
	}
	return count;
}

int main()
{
	char arr[] = { "abcd" };
	int a = sz(arr);
	printf("%d", a);
	return 0;
}