#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40


int main(int argc, char *argv[])//argc参数个数，argv[]参数名0为文件名，1为第一个参数   在命令台输入（程序名 （要传入的参数名）） 
{
	FILE *in,*out;
	int ch;
	char name[LEN];
	int count = 0;

	if (argc < 2)//检查命令行参数
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "error of %s",argv[1]);
		exit(EXIT_FAILURE);

	}

	strncpy(name, argv[1], LEN - 5);//拷贝文件名
	name[LEN - 5] = '\0';
	strcat(name, ".red");//在文件名后添加.red
	
	if ((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "error of %s", name);
		exit(3);
	}

	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)//打印三个字符中的第一个
		{
			putc(ch, out);
		}
	}

	if (fclose(in) != 0 || fclose(out) != 0)
	{
		fprintf(stderr, "error");
	}

	return 0;
}