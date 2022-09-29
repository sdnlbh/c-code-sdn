
#include"head.h"


void menu()//游戏菜单
{
	printf("******************************\n");
	printf("***** 1.进行游戏   0.退出*****\n");
	printf("******************************\n");
	printf("请选择>:");

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
			printf("输入错误\n");
			break;
		}
		

	} while (c);//只要不为零就循环
   

	return 0;
}