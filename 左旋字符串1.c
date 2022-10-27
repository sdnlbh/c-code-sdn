#include<stdio.h>
#include<string.h>

void left_move(char arr[], int n)
{
	
	int len = strlen(arr);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		char tmp = arr[0];//每趟循环先出去第一位元素
		int j = 0;
		for (j = 0; j < len - 1; j++)//剩余元素前移
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;//末尾补齐
    }
	
}

int main()
{
	char arr[] = { "abcdef" };
	left_move(arr, 3);
	printf("%s", arr);
	return 0;
}