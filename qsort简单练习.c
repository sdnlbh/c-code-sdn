#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//升序e1-e2降序e2-e1
}

int cmp1(const void* e1, const void* e2)
{
	return ((int)(*(float*)e1 - *(float*)e2));
}


void test1()//整形比较
{ 
	int arr1[] = { 1,5,2,7,3,9,4,6,8 };
	qsort(arr1, sizeof(arr1)/ sizeof(arr1[0]), sizeof(arr1[0]), cmp);
	int i = 0;
	for (i = 0; i < sizeof(arr1)/ sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}



void test2()//浮点数比较
{
	float arr2[] = { 1.0,6.5,3.1,4.4,2.1 };
	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp1);
	int i = 0;
	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%f ", arr2[i]);
	}
}




int main()
{
	int(*cmpp[])() = {test1,test2};//函数指针数组
	cmpp[0]();
	cmpp[1]();
	return 0;
}