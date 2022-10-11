#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* p1, const char* p2)//const防止传参错误修改p2数组
{
	char* ret = p1;//保存第一位元素地址回传
	assert(p1 != NULL);//判断是否为空指针
	assert(p2 != NULL);
	while (*p1++ = *p2++)//后置++先使用后++
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "nice try" };
	
	printf("%s", my_strcpy(arr1, arr2));//链式访问
	return 0;
}