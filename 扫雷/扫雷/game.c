#include"标头.h"




void game()//游戏主体
{   
	char arr1[ROWS][COLS] = { "0" };//布雷数组111111
	char arr2[ROWS][COLS] = { 0 };//显示数组2222222
	init(arr1,ROWS,COLS,'0');
	init(arr2, ROWS, COLS, '*');
	boom(arr1, ROWS, COLS);
	print(arr2, ROW, COL);//打印9*9
	while (1)
	{
		if (act(arr1, arr2, ROW, COL)==0)
			break;
		if (iswin(arr2, ROW, COL)==3)
			break;
	}
}


void menu()//游戏菜单
{
	printf("*********************************\n");
	printf("*****1.开始游戏   0.退出游戏*****\n");
	printf("*********************************\n");
	printf("请选择>:");


}


void init(char arr[ROWS][COLS],int row ,int col,char set)//初始化数组
{

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = set;
		}

	}

}

void print(char arr[ROWS][COLS], int row, int col)//棋盘打印
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);//打印列

		

	}
	printf("\n");
	printf("--------------------");
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d|", i);//打印行

		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

}

void boom(char arr1[ROWS][COLS], int row, int col)//布雷
{
	int i = 0;
	int count = 10;
	while (count)//避免重复的布雷方法
	{
		    int x = rand() % 9 + 1;
			int y = rand() % 9 + 1;
			if (arr1[x][y] != 'x')
			{
				arr1[x][y] = 'x';
				count--;
			}
	}


}

int act(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col)//行动，失败判断，信息显示
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标>:");
		scanf_s("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)//判断坐标是否合法
		{
			if (arr1[x][y] == 'x')//忘记''直接g
			{
				arr2[x][y] = 'x';
				system("cls");
				print(arr1, ROW, COL);
				printf("\n\n\n");
				print(arr2, ROW, COL);
				printf("gggggggggg\n");
				return 0;
			}
			if (arr1[x][y] == '0')//无雷时操作
			{
				nt(arr1,arr2,row,col,x,y);
				return 1;
			}
		}
		else//你犯法了你知道么（
		{
			printf("坐标错误\n");
		}
	}
}

void nt(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col, int x, int y)//链式反应
{
	int count = 0;//计数器
	int xp = x - 1;
	int yp = y - 1;
	if (x > 0 && x <= row && y > 0 && y <= col&&arr1[x][y]=='0'&&arr2[x][y]=='*')
	{

		for (xp = x - 1; xp <= x + 1; xp++)//不错的循环尝试捏（不从头开始）
		{
			for (yp = y - 1; yp <= y + 1; yp++)//yp要重置！
			{
				if (arr1[xp][yp] == 'x')//无雷时周围雷数
				{
					count++;

				}


			}
		}
		arr2[x][y] = count + '0';//整形与字符的奇妙转换法
		system("cls");
		print(arr2, ROW, COL);

		if (count == 0)//
		{
			arr2[x][y] = ' ';
			xp = x - 1;
			yp = y - 1;
			nt(arr1, arr2, row, col, x - 1, y - 1);
			nt(arr1, arr2, row, col, x - 1, y);
			nt(arr1, arr2, row, col, x - 1, y + 1);
			nt(arr1, arr2, row, col, x, y - 1);
			nt(arr1, arr2, row, col, x, y + 1);
			nt(arr1, arr2, row, col, x + 1, y - 1);	
			nt(arr1, arr2, row, col, x + 1, y);
			nt(arr1, arr2, row, col, x + 1, y + 1);//去掉中心，不然死循环
		}
	}
}
	


int iswin(char arr[ROWS][COLS], int row, int col)//胜利判断（可优化）
{   
	int count = 0;
	int i = 0;
	int j = 0;

	for (i = 1; i <= row; i++)
	{

		for (j = 1; j <= col; j++)
		{
			if (arr[i][j] == '*')
				count++;
		}
		
	}
	
	if (count == 10)
	{
		printf("你赢了");
		return 3;
	}
	else
		return 0;
}

//}//for (xp = x - 1; xp <= x + 1; xp++)
//{
//	for (yp = y - 1; yp <= y + 1; yp++)
//	{
//		if (xp == x && yp == y)
//		{
//			break;
//		}
//		else
//			nt(arr1, arr2, row, col, xp, yp);
//	}
//}