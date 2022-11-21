#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i = 0;
	FILE* p = fopen("log.txt", "w");
	if (p == NULL)
	{
		perror("open");
		return 0;
	}
	fprintf(p,"file:%s\nline:%d\ndate:%s\ntime:%s",
		__FILE__, __LINE__, __DATE__, __TIME__);
	printf( "file:%s line:%d date:%s time:%s\n",
		__FILE__, __LINE__, __DATE__, __TIME__);
	fclose(p);
	p = NULL;
	return 0;
}