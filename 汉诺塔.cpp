#include<stdio.h>
int c = 0;
void move(char x, int n, char z)
{
	printf("��%i������%i�̴�%c->%c\n",++c, n, x, z);

}
void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
		move(x, 1, z);
	else
	{
		hanoi(n - 1, x, z, y); //ע�� ע��  ע�����˳��   ����n-1��Բ�̴�a�Ƶ�b��
		move(x, n, z);//����n��Բ�̴�a�Ƶ�c
		hanoi(n - 1, y, x, z);//��n-1��Բ�̴�b��c
	}

}


int main()
{
	int n;
	printf("a,b,c\n");
	scanf_s("%d", &n);
	hanoi(n, 'a', 'b', 'c');
	return 0;
}