#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char pass[20] = { 0 };
	for (i = 0; i < 3; i++)
	{   
		scanf_s("%s", pass,7);
		if (strcmp(pass, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;


		}
		

	}

	if (i == 3)
		printf("��½ʧ��");


	return 0;
}