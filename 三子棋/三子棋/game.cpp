#include"head.h"


void game(char arr[ROW][COL], int row, int col)//游戏主体
{
	printf("游戏开始\n");
	rebuid(arr, ROW, COL);
	print(arr, ROW,COL);
	int J = 0;
	while (1)
	{
		move1(arr, ROW, COL);
		system("cls");
		print(arr, ROW, COL);
		J=judge1(arr, ROW, COL);
		if (J == 1)
		{
			printf("玩家一win!\n");
			break;
		}
		else if (J == 3)
		{
			printf("平局");
			break;
		}

		move2(arr, ROW, COL);
		system("cls");
		print(arr, ROW, COL);
		J= judge2(arr, ROW, COL);
		if (J == 2)
		{
			printf("玩家二win!\n");
			break;
		}
		else if (J == 3)
		{
			printf("平局");
			break;
		}
	}


}

void rebuid(char arr[ROW][COL], int row, int col)//初始化数组
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
			arr[i][j] = {' '};

	}

}

void print(char arr[ROW][COL], int row, int col)//棋盘打印
{
	int i = 0;
	int j = 0;

	for (i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");

		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	 }
}

void move1(char arr[ROW][COL], int row, int col)//落子
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家一输入坐标(x y)>:");
		scanf_s("%d%d", &x, &y);//输入时记得加空格！！！！！！！！！！！
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)//不可用连等	
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标被占用");

		}
		else
		{
			printf("坐标非法");
		}

	}
}

void move2 (char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家二输入坐标(x y)");
		scanf_s("%d%d", &x, &y);
		if (1 <= x && x <= 3 && 1 <= y && y <= 3)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '#';
				break;
			}
			else
				printf("坐标被占用");

		}
		else
		{
			printf("坐标非法");
		}

    }
}


int judge1(char arr[ROW][COL], int row, int col)//胜负判断，注意数组下标从零开始
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//行
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0]=='*')
			return 1;
	}
	for (j = 0; j < col; j++)
	{
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[0][j] =='*')
			return 1;
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == '*')
		return 1;
	if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2] && arr[2][0] == '*')
		return 1;
	if (full(arr, ROW, COL) == 3)
	{
		return 3;
	}
	else
		return 5;
}


int judge2(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//行
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] == '#')
			return 2;
	}
	for (j = 0; j < col; j++)
	{
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[0][j] == '#')//列
			return 2;
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == '#')//斜线
		return 2;
	if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2] && arr[2][0] == '#')
		return 2;
	if (full(arr, ROW, COL) == 3)
	{
		return 3;
	}
	else
		return 5;
}

int full(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
				return 5;

		}

	}
	return 3;
}

