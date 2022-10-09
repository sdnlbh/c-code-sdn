#include<stdio.h>

int main()
{
	char arr[] = { "text char" };
	int a = 0;
	printf("send number\n");
	printf("your number___\b\b");//\b光标回退一个
	scanf_s("%d", &a);
	printf("\n\tjob");//\t光标前进八格超过上线从本行起始开始
	printf("\rgood\n");//\r可以回到行初
	printf("%8.4s", arr);//输出占8格取左边4个字符左补空格
	return 0;
}