#include<stdio.h>
#include<string.h>

struct stu
{
	int age;
	char name[20];
};


void swap(char* e1,char* e2,int width)//交换的实现
{
	int i = 0;
	for (i = 0; i < width; i++)//利用宽度进行交换
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void my_qsort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2))//qsort主体（本质为冒泡函数）
{
	int i = 0;
	for (i = 0; i < sz; i++)//趟数
	{
		int j = 0;
		for (j = 0; j < sz -1- i; j++)//每趟次数
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//利用char*每次检索一个字节与宽度参数检索每个元素的地址
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);//利用回调函数交换，防止破坏地址循环
			}

		}
	}
}

int int_cmp(const void* e1, const void* e2)//使用者自定义的类型交换与交换方法
{
	return *(int*)e1 - *(int*)e2;
}

int s_cmp(const void* e1, const void* e2)
{
	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
}

int main()
{
	int arr[] = { 4,2,3,1,7,0,9,6,5,8 };
	struct stu s[] = { {20,"cv"},{17,"dd"},{18,"ca"},{21,"bb"} };
	int sz = sizeof(s) / sizeof(s[0]);
	my_qsort(s,sz,sizeof(s[0]),s_cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i].age);
		printf("%s\n", s[i].name);
	}
     
	return 0;
}