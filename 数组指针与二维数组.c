#include<stdio.h>

void print(int (*p)[5], int x, int y)//����ָ��  д��int p[3][5]Ҳ���������
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
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };//���ڶ�ά���������������Ӧ����Ԫ��Ϊ��һ����������
	print(arr,3,5);
	return 0;
}