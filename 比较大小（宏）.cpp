#include <stdio.h>

#define bj(x,y) (x>y?x:y)








int main()
{
	printf("请输入要比较的两个数。（a b）\n");
	float a = 0;
	float b = 0;
	scanf_s("%f%f", &a, &b);
	float p = bj(a, b);
	printf("比较大的数是%f", p);





	return 0;
}