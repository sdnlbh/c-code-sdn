#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strncat(char* dest,const char* src,int sz)
{
	assert(dest && src);
	char* ret = dest;
	int szod = strlen(dest);
	char* dests = dest + szod;
	int i = 0;
	while (sz--)
	{
		if (!(*dests++ = *src++))//*dests,*src!=0时继续
		return ret;
	}
	*dests = '\0';//末尾补上'\0'
	return ret;

}

int main()
{
	char str1[20] = { "abcdef" };
	char str2[] = { "ggggbb" };
	my_strncat(str1, str2, 6);
	printf("%s", str1);
	return 0;
}
