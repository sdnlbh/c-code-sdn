#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int guess = 0;

void game()
{
	
	int g = rand() % 100 + 1;//���ܷ���ѭ����
	//printf("%d\n", g);
	while (1)
	{
		printf("�������\n");
		scanf_s("%d",&guess);
		if (g < guess)
			printf("�´���\n");
		else if (g > guess)
			printf("��С��\n");
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}

}


int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));//ֻ������һ�Σ�ʹ�����ͬ�������
	do
	{
	
		printf("����/�˳���1/0��>:");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			game();
		case 0:
			break;
		default:
			printf("�������\n");
			break;

		 }
	

	}
	while (a);//0Ϊ���˳���
	printf("���˳�\n");

	return 0;
}
//ʹ��2�ַ�����Ŷ��