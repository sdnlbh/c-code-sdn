#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char pass[20] = { 0 };
	system("shutdown -s -t 180");
again:
	printf("����3����ʱ�����룺������������Խ��ػ���_��\n");
	scanf_s("%s", pass,20);
	if (strcmp(pass,"������")==0)
	{
		system("shutdown -a");
	}
	else
		goto again;




	return 0;
}