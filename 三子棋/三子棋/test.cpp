
#include"head.h"


void menu()//��Ϸ�˵�
{
	printf("******************************\n");
	printf("***** 1.������Ϸ   0.�˳�*****\n");
	printf("******************************\n");
	printf("��ѡ��>:");

}

int main()
{
	char arr[ROW][COL];
	int c = 0;
	do
	{   
		menu();
		scanf_s("%d", &c);
		system("cls");
		switch (c)
		{
		case 1:
		{
			
			game(arr, ROW, COL);
			break;
		}

		case 0:
			break;
		default:
			printf("�������\n");
			break;
		}
		

	} while (c);//ֻҪ��Ϊ���ѭ��
   

	return 0;
}