#include<stdio.h>

int main()//
{
	int sc = 0;
	scanf_s("%d", &sc);//0-100
	int level = sc / 10;
	switch (level)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	{
		printf("%d-C", sc);
		break;
	}
	case 6:
	case 7:
	case 8:
	{
		printf("%d-B", sc);
		break;
	}
	case 9:
	case 10:
	{
		printf("%d-A", sc);
		break;
	}
	default:printf(" ‰»Î¥ÌŒÛ");
		return 0;
	}
}