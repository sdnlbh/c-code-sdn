#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char pass[20] = { 0 };
	system("shutdown -s -t 180");
again:
	printf("你有3分钟时间输入：我是猪；否则电脑将关机·_·\n");
	scanf_s("%s", pass,20);
	if (strcmp(pass,"我是猪")==0)
	{
		system("shutdown -a");
	}
	else
		goto again;




	return 0;
}