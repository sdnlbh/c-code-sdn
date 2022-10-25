#include<stdio.h>

int main()//1元一瓶2个空瓶可换1瓶
{
	int money = 0;//初始资金
	int bottle = 0;//汽水瓶水
	int exbottle = 0;//空瓶子
	scanf_s("%d", &money);
	bottle = money;
	exbottle = bottle;
	while (exbottle>=2)
	{
		bottle += exbottle / 2;
		exbottle = exbottle / 2 + exbottle % 2;//对于奇数的运算；
		
	}
	printf("%d", bottle);


	return 0;
}