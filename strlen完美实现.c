#include<stdio.h>
#include<assert.h>
#include<string.h>
int my_strlen(const char* p)//遇0返回count
{
	assert(p != NULL);
	int count = 0;
	while (*p++ != 0)//后置++的魅力
	{
		count++;
	}
	return count;
	
}

int main()
{
	char arr[] = { "hello word" };
	int sz = my_strlen(arr);
	int sz2 = strlen(arr);
	printf("%d\n",sz);
	printf("%d", sz2);

	return 0;
}