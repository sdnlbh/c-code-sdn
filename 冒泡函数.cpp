#include <stdio.h>

void bubbling(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//趟数
	{
		int j = 0;
		int k = 1;//用来检验是否需要继续冒泡
		for (j = 0; j < sz - 1-i; j++)//每趟次数
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				k = 0;//用来检验是否需要继续冒泡
			}

		}
		if (k == 1)//用来检验是否需要继续冒泡
		break;
	}

}

int main()
{
	int i = 0;
	int arr[] = { 1,4,7,10,9,8,2,3,6,5 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbling(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
