#include<stdio.h>

void swap(int arr1[], int arr2[], int sz)
{
	int temp = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
	 temp = arr1[i];
	 arr1[i] = arr2[i];
	 arr2[i] = temp;
	}
}


void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	swap(arr1,arr2,sz);
	print(arr1,sz);
	print(arr2, sz);

}