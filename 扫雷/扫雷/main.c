#include "��ͷ.h"

int main()
{
	int c = 0;//�˵�ѡ����
	srand(time(NULL));
	do
	{
		
		menu();
		scanf_s("%d", &c);
		switch (c)
		{
		case 1:
		{   system("cls");
			game();
			break;

		}
		case 0:
		{
			printf("�˳�����");
			break;
		}
		default:
		{
			printf("�������\n");

		}
		}
	} while (c);

	return 0;
}//��Ȼ�о����ڶ���Ż��Ŀռ䣬�������Ѿ����أ����պ����¹�˼:)