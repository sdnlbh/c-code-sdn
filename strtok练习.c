#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]={0};
	char str2[] = { "hello***" };
	char str3[] = { "world11111" };
	strcat_s(str,20, str2);//此项赋值会打乱原初始化
	strncat_s(str, 20, str3, 5);
	printf("%s\n", str);
	//strtok_s使用，
	char* str4 = str;// 一个char*储存原函数代替分割
	char* s = "*";//一个char*储存标记，注意要用""
	char* ret = NULL;// 需要一个char* 储存返回值
	char* ret2 = NULL;//_s特需，一个char*储存分割函数
	for (ret=strtok_s(str4, s,&ret2); ret != NULL; ret=strtok_s(NULL, s,&ret2))
	{
		printf("%s\n", ret);
	}


	return 0;
}