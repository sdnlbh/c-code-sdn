#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int* p = arr;
	for (p; p < &arr[10]; p++)//地址的比较，指针访问数组方法
	{
		printf("%d", *p);
	}

	return 0;
}