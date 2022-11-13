#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main()
{
	char arr[100] = { 0 };
	char arr1[100] = { 0 };
	char error[100] = { 0 };
	FILE* p = fopen("test.txt", "r+");
	if (p == NULL)
	{
		strerror_s(error, 100, errno);
		printf("%s", error);
		return 0;
	}
	fscanf_s(stdin, "%s", arr, 99);
	fprintf(p, "%s", arr);
	rewind(p);//回到文件初
	fgets(arr1, 100, p);
	fputs(arr1, stdout);
	fclose(p);
	
	/*fscanf(p, "%s", arr1);
	printf("%s", arr1);*/
	return 0;
}