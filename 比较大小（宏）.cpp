#include <stdio.h>

#define bj(x,y) (x>y?x:y)








int main()
{
	printf("������Ҫ�Ƚϵ�����������a b��\n");
	float a = 0;
	float b = 0;
	scanf_s("%f%f", &a, &b);
	float p = bj(a, b);
	printf("�Ƚϴ������%f", p);





	return 0;
}