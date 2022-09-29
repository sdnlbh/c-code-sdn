#include<stdio.h>

int sz(char* arr)
{

	if (*arr != 0)
	{
		return 1 + sz(arr + 1);

	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = { "abcde" };//sizeof£¨arr£©==6
	int a = sz(arr);
	int b = sizeof(arr);
	printf("%d", a);
	return 0;
}