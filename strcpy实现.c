#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
    while(*dest++=*src++)
	{
		;
	}
	return ret;

}

int main()
{
	char str1[20] = { "0" };
	char str2[] = { "abcdef" };
	my_strcpy(str1, str2);
	printf("%s", str1);

	return 0;
}