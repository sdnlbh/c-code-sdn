#include"head.h"


void game(char arr[ROW][COL], int row, int col)//��Ϸ����
{
	printf("��Ϸ��ʼ\n");
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
			printf("���һwin!\n");
			break;
		}
		else if (J == 3)
		{
			printf("ƽ��");
			break;
		}

		move2(arr, ROW, COL);
		system("cls");
		print(arr, ROW, COL);
		J= judge2(arr, ROW, COL);
		if (J == 2)
		{
			printf("��Ҷ�win!\n");
			break;
		}
		else if (J == 3)
		{
			printf("ƽ��");
			break;
		}
	}


}

void rebuid(char arr[ROW][COL], int row, int col)//��ʼ������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
			arr[i][j] = {' '};

	}

}

void print(char arr[ROW][COL], int row, int col)//���̴�ӡ
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

void move1(char arr[ROW][COL], int row, int col)//����
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�����һ��������(x y)>:");
		scanf_s("%d%d", &x, &y);//����ʱ�ǵüӿո񣡣�������������������
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)//����������	
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("���걻ռ��");

		}
		else
		{
			printf("����Ƿ�");
		}

	}
}

void move2 (char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����Ҷ���������(x y)");
		scanf_s("%d%d", &x, &y);
		if (1 <= x && x <= 3 && 1 <= y && y <= 3)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '#';
				break;
			}
			else
				printf("���걻ռ��");

		}
		else
		{
			printf("����Ƿ�");
		}

    }
}


int judge1(char arr[ROW][COL], int row, int col)//ʤ���жϣ�ע�������±���㿪ʼ
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//��
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
	for (i = 0; i < row; i++)//��
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] == '#')
			return 2;
	}
	for (j = 0; j < col; j++)
	{
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[0][j] == '#')//��
			return 2;
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == '#')//б��
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

