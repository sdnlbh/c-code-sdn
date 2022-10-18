#include<string.h>
#include<stdio.h>

int mylen(char arr[])//求字符串长度
{
	int count = 0;
	while (*arr++ != '\0')//先解引用后加加
	{
		count++;
	}
	return count;
}

void reserve(char *arr)//逆序排列
{
	char tmp = arr[0];
	int len = mylen(arr);
	arr[0] = arr[len-1];//下标从零开始
	arr[len-1] = '\0';
	if (mylen(arr+1) >= 2)
	{
		reserve(arr+1);
	}
	arr[len-1] = tmp;

}

int main()
{
	char arr[] = {"abcdef"};
	reserve(arr);
	printf("%s", arr);
	return 0;
}