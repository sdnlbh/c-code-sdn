
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int is_reserve(char* arr1, char* arr2)
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat_s(arr1,13, arr1,6);//�ڶ����������ڵ��������ɵ������С��С�ڵ���ԭ�����С
	//strncat_s(arr1, 20, "abcdefg", 7)
	char* arr3 = strstr(arr1,arr2);
	if (arr3 == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[20] = { "abcdef" };//�����ýϴ�������С
	char arr2[] = { "cdefas" };
	int j=is_reserve(arr1, arr2);
	if (j == 0)
	{
		printf("��");
	}
	if (j == 1)
	{
		printf("��");
	}
	return 0;
}