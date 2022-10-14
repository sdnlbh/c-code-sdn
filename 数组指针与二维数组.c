#include<stdio.h>

void print(int (*p)[5], int x, int y)//数组指针  写成int p[3][5]也可完成任务
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%2d ", p[i][j]);    //==*(*(p+i)+j)
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };//对于二维数组而言数组名对应的首元素为第一行数组整体
	print(arr,3,5);
	return 0;
}