#include<stdio.h>//在命令台使用><重定位来输入输出

int main()
{
	int ch;
	while ((ch = getchar()) != EOF)//eof必须是下次读取的第一个字符才能起结束作用，否则为SUB字符
	{
		putchar(ch);
	}
	return 0;
}
