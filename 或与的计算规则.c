#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 0;
	d = --a && b++ && c;//ֻ��&&���Ϊ0�Ͳ���������  
	printf("%d %d %d %d\n", a, b, c, d);

	d = a || ++b || c;//ֻҪ||��߲�Ϊ0�Ͳ���������  
	printf("%d %d %d %d\n", a, b, c, d);
	return 0;
}//&& || ���߷���ֵ ��Ϊ1 ��Ϊ0