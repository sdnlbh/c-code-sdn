#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while(*str1==*str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;//加加条件写到这里防止多加
		str2++;

	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}


}



int main()
{
	char str1[] = { "abcdef" };
	char str2[] = { "abcdef" };
	int a = my_strcmp(str1,str2);
	printf("%d", a);

	return 0;
}