#include <stdio.h>

int bj(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}
int main()
{   
	printf("������������Ҫ�Ƚϵ�������a b��\n");
	int a = 0;
	int b = 0;
	scanf_s("%d%d",&a, & b);
	int p = bj(a, b);
	printf("�Ƚϴ����%d", p);

	return 0;
}