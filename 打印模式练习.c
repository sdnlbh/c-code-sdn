#include<stdio.h>

int main()
{
	char arr[] = { "text char" };
	int a = 0;
	printf("send number\n");
	printf("your number___\b\b");//\b������һ��
	scanf_s("%d", &a);
	printf("\n\tjob");//\t���ǰ���˸񳬹����ߴӱ�����ʼ��ʼ
	printf("\rgood\n");//\r���Իص��г�
	printf("%8.4s", arr);//���ռ8��ȡ���4���ַ��󲹿ո�
	return 0;
}