#include<stdio.h>
#include<assert.h>
#include<string.h>

const char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	 char* s1 = (char*)p1;
	 char* s2 = (char*)p2;
	 char* start = s1;
	if (*p2 == '\0')
	{
		return p1;
	}
	while (*start)
	{
		s1 = start;
		s2 = p2;
		while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))//д'\0'����0��д'0'
		{
			s1++;
			s2++;
	
		}
		if (*s2 == '\0')
		{
			return start;//�ҵ�
		}
		start++;//ÿ��ʧ����ʼλ��+1
	}
	return NULL;//�Ҳ���
}

int main()
{
	char arr1[] = { "abcdeeff" };
	char arr2[] = { "eff"};
    char* p = my_strstr(arr1, arr2);
	printf("%s", p);
	return 0;
}