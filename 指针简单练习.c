#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int* p = arr;
	for (p; p < &arr[10]; p++)//��ַ�ıȽϣ�ָ��������鷽��
	{
		printf("%d", *p);
	}

	return 0;
}