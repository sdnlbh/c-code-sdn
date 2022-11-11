#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


int main()
{
	char m[10];
	int* p =(int*) malloc(5*sizeof(int));
	if (p == NULL)
	{
		strerror_s(m, 10, errno);//strerror用法，需要使用者开创一片空间储存错误信息字符串，参数分别为空间地址char*，空间大小int，错误码，errno
		printf("%s", m);

	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 5; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	printf("\n");
	free(p);
	p = NULL;

		int* p1 = (int*)calloc(5,sizeof(int));
		if (p1 == NULL)
		{
			strerror_s(m, 10, errno);
			printf("%s", m);

		}
		else
		{
			int i = 0;
			for (i = 0; i < 5; i++)
			{
				*(p1 + i) = 2*i;
			}
			for (i = 0; i < 5; i++)
			{
				printf("%d ", *(p1 + i));
			}
	}
		printf("\n");
		int* p3 = (int*)realloc(p1, 40);//先赋值给新指针检测是否为空指针
		if (p3 == NULL)
		{
			strerror_s(m, 10, errno);
			printf("%s", m);

		}
		else
		{
			p1 = p3;//确保安全后使用
			int i = 0;
			for (i = 0; i < 10; i++)
			{
				*(p1 + i) = 2 * i;
			}
			for (i = 0; i < 10; i++)
			{
				printf("%d ", *(p1 + i));
			}
		}
	return 0;
}