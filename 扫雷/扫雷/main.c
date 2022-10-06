#include "标头.h"

int main()
{
	int c = 0;//菜单选择项
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
			printf("退出程序");
			break;
		}
		default:
		{
			printf("输入错误\n");

		}
		}
	} while (c);

	return 0;
}//虽然感觉有众多可优化的空间，但猪脑已经过载，容日后重新构思:)