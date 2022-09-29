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
	printf("请输入两个需要比较的数。（a b）\n");
	int a = 0;
	int b = 0;
	scanf_s("%d%d",&a, & b);
	int p = bj(a, b);
	printf("比较大的是%d", p);

	return 0;
}