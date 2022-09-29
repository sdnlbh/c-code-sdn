#include<stdio.h>
#include<string.h>
#include<math.h>

int sk(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;

    while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}



int main()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 8;
	if (sk(arr, k, sz) == -1)
	{
		printf("noway");

	}
	else
	{
		printf("ÏÂ±êÊÇ%d", sk(arr, k, sz));


	}
}