#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	int ch;
	char name[20] = { 0 };
	scanf("%s", name);
	int count = 0;
	FILE* pf1 = fopen(name, "r");
	if (pf1 == NULL)
	{
		perror(name);//��ӡ������
		exit(EXIT_FAILURE);
	}
	FILE* pf2 = fopen("new.txt", "w");
	if (pf2 == NULL)
	{
		perror("error of writting");
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(pf1)) != EOF)//ÿ��ȡ�����ַ�д��һ��
	{
		if (count++ % 3 == 0)
		{
			fputc(ch,pf2);
		}
		
    }

	if (ferror(pf1))//����0δ�������򷵻ط�0
	{
		puts("error of reading");
	}
	if (feof(pf1))//���ط���δ�������򷵻�0
	{
		puts("EOF reached successfully");
	}
	
	if (fclose(pf1) != 0 || fclose(pf2) != 0)//�ɹ�����0����Ϊ-1
	{
		printf("error of colsing file");
	}
	pf1 = NULL;
	pf2 == NULL;




	return 0;
}