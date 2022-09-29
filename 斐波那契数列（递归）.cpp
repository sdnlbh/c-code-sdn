#include<stdio.h>


int sf(int n)
{
	
	if (n <= 2)
		return 1;
	else
		return sf(n - 1) + sf(n - 2);


}

int main()
{
	int n = 0;
	int num = 0;
	scanf_s("%d", &n);
	num = sf(n);
	printf("%d", num);


	return 0;
}