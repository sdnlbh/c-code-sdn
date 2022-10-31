#include<stdio.h>
#include<string.h>
#include<assert.h>

void* my_memmove(void* dest,const void* src, int sz)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)//当目的地地址小于源地址时正常移动
	{
		while (sz--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;//这个++要在前面不然会报错
			++(char*)src;

		}
	}
	else
	{
		while (sz--)//当目的地地址大于源地址是从后往前移动
		{
			*((char*)dest + sz ) = *((char*)src + sz );//先把地址加sz再解引用

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