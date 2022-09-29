#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int guess = 0;

void game()
{
	
	int g = rand() % 100 + 1;//不能放在循环内
	//printf("%d\n", g);
	while (1)
	{
		printf("请猜数字\n");
		scanf_s("%d",&guess);
		if (g < guess)
			printf("猜大了\n");
		else if (g > guess)
			printf("猜小了\n");
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}

}


int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));//只用设置一次，使起点相同更好随机
	do
	{
	
		printf("进入/退出（1/0）>:");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			game();
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;

		 }
	

	}
	while (a);//0为假退出；
	printf("已退出\n");

	return 0;
}
//使用2分法更快哦！