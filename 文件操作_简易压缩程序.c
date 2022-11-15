#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40


int main(int argc, char *argv[])//argc����������argv[]������0Ϊ�ļ�����1Ϊ��һ������   ������̨���루������ ��Ҫ����Ĳ��������� 
{
	FILE *in,*out;
	int ch;
	char name[LEN];
	int count = 0;

	if (argc < 2)//��������в���
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "error of %s",argv[1]);
		exit(EXIT_FAILURE);

	}

	strncpy(name, argv[1], LEN - 5);//�����ļ���
	name[LEN - 5] = '\0';
	strcat(name, ".red");//���ļ��������.red
	
	if ((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "error of %s", name);
		exit(3);
	}

	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)//��ӡ�����ַ��еĵ�һ��
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