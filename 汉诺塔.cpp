#include<stdio.h>
int c = 0;
void move(char x, int n, char z)
{
	printf("第%i步：将%i盘从%c->%c\n",++c, n, x, z);

}
void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
		move(x, 1, z);
	else
	{
		hanoi(n - 1, x, z, y); //注意 注意  注意参数顺序   （将n-1个圆盘从a移到b）
		move(x, n, z);//将第n个圆盘从a移到c
		hanoi(n - 1, y, x, z);//将n-1个圆盘从b到c
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