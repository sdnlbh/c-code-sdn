#include<stdio.h>

int main()//1Ԫһƿ2����ƿ�ɻ�1ƿ
{
	int money = 0;//��ʼ�ʽ�
	int bottle = 0;//��ˮƿˮ
	int exbottle = 0;//��ƿ��
	scanf_s("%d", &money);
	bottle = money;
	exbottle = bottle;
	while (exbottle>=2)
	{
		bottle += exbottle / 2;
		exbottle = exbottle / 2 + exbottle % 2;//�������������㣻
		
	}
	printf("%d", bottle);


	return 0;
}