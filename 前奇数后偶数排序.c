#include<stdio.h>

void move(int* p, int sz)
{
	int left = 0;
	int right = sz-1;
	while (left < right)
	{
		while ((left < right) && (p[left] % 2 == 1))//×óÕÒÆæÊý
		{
			left++;
		}
		while ((left < right) && (p[right] % 2 == 0))//ÓÒÕÒÅ¼Êý
		{
			right--;
		}
		if (left < right)
		{
			int tmp = p[left];
			p[left] = p[right];
			p[right] = tmp;
		}
	}
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	move(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}