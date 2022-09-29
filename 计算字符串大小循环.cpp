#include<stdio.h>

int sz(char arr[])
{
	int count = 0;
	while (*arr != 0)//对arr解引用获取当前第一位元素的值
	{
		count++;
		arr++;
		
	}
	return count;
}

int main()
{
	char arr[] = { "abcd" };
	int a = sz(arr);
	printf("%d", a);
	return 0;
}