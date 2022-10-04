#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 0;
	d = --a && b++ && c;//只有&&左边为0就不继续计算  
	printf("%d %d %d %d\n", a, b, c, d);

	d = a || ++b || c;//只要||左边不为0就不继续计算  
	printf("%d %d %d %d\n", a, b, c, d);
	return 0;
}//&& || 两者返回值 真为1 假为0