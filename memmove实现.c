#include<stdio.h>
#include<string.h>
#include<assert.h>

void* my_memmove(void* dest,const void* src, int sz)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)//��Ŀ�ĵص�ַС��Դ��ַʱ�����ƶ�
	{
		while (sz--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;//���++Ҫ��ǰ�治Ȼ�ᱨ��
			++(char*)src;

		}
	}
	else
	{
		while (sz--)//��Ŀ�ĵص�ַ����Դ��ַ�ǴӺ���ǰ�ƶ�
		{
			*((char*)dest + sz ) = *((char*)src + sz );//�Ȱѵ�ַ��sz�ٽ�����

		}
	}

	return dest;
}


int main()
{
	int i = 0;
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[] = { 8,9,0 };
	my_memmove(arr1 + 4, arr1+3, 12);
	for (i = 0; i < 7; i++)
	{
		printf("%d", arr1[i]);
	}

	return 0;
}