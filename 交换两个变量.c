#include<stdio.h>
//传址函数对原数直接改动（练习）
void switch1(int* a, int* b)//临时变量交换法
{
	int temp = 0;
        temp = *b;
	    *b = *a;
        *a = temp;
}

void switch2(int* a, int* b)//加减交换法，可能有溢出现象
{
	*a = *a + *b;
	*b =*a - *b;
	*a = *a - *b;
}

void switch3(int* a, int* b)//异或交换法
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;

}

int main()
{
	int a = 3;
	int b = 7;
	switch3(&a, &b);
	printf("%d\n", a);
	printf("%d", b);

	return 0;
}