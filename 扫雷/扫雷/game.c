#include"��ͷ.h"




void game()//��Ϸ����
{   
	char arr1[ROWS][COLS] = { "0" };//��������111111
	char arr2[ROWS][COLS] = { 0 };//��ʾ����2222222
	init(arr1,ROWS,COLS,'0');
	init(arr2, ROWS, COLS, '*');
	boom(arr1, ROWS, COLS);
	print(arr2, ROW, COL);//��ӡ9*9
	while (1)
	{
		if (act(arr1, arr2, ROW, COL)==0)
			break;
		if (iswin(arr2, ROW, COL)==3)
			break;
	}
}


void menu()//��Ϸ�˵�
{
	printf("*********************************\n");
	printf("*****1.��ʼ��Ϸ   0.�˳���Ϸ*****\n");
	printf("*********************************\n");
	printf("��ѡ��>:");


}


void init(char arr[ROWS][COLS],int row ,int col,char set)//��ʼ������
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

void print(char arr[ROWS][COLS], int row, int col)//���̴�ӡ
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);//��ӡ��

		

	}
	printf("\n");
	printf("--------------------");
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d|", i);//��ӡ��

		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

}

void boom(char arr1[ROWS][COLS], int row, int col)//����
{
	int i = 0;
	int count = 10;
	while (count)//�����ظ��Ĳ��׷���
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

int act(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col)//�ж���ʧ���жϣ���Ϣ��ʾ
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������>:");
		scanf_s("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)//�ж������Ƿ�Ϸ�
		{
			if (arr1[x][y] == 'x')//����''ֱ��g
			{
				arr2[x][y] = 'x';
				system("cls");
				print(arr1, ROW, COL);
				printf("\n\n\n");
				print(arr2, ROW, COL);
				printf("gggggggggg\n");
				return 0;
			}
			if (arr1[x][y] == '0')//����ʱ����
			{
				nt(arr1,arr2,row,col,x,y);
				return 1;
			}
		}
		else//�㷸������֪��ô��
		{
			printf("�������\n");
		}
	}
}

void nt(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col, int x, int y)//��ʽ��Ӧ
{
	int count = 0;//������
	int xp = x - 1;
	int yp = y - 1;
	if (x > 0 && x <= row && y > 0 && y <= col&&arr1[x][y]=='0'&&arr2[x][y]=='*')
	{

		for (xp = x - 1; xp <= x + 1; xp++)//�����ѭ�������󣨲���ͷ��ʼ��
		{
			for (yp = y - 1; yp <= y + 1; yp++)//ypҪ���ã�
			{
				if (arr1[xp][yp] == 'x')//����ʱ��Χ����
				{
					count++;

				}


			}
		}
		arr2[x][y] = count + '0';//�������ַ�������ת����
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
			nt(arr1, arr2, row, col, x + 1, y + 1);//ȥ�����ģ���Ȼ��ѭ��
		}
	}
}
	


int iswin(char arr[ROWS][COLS], int row, int col)//ʤ���жϣ����Ż���
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
		printf("��Ӯ��");
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