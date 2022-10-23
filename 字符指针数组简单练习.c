#include<stdio.h>

int main()
{
	char *arr[] = { "nb","lgd","dota","cn","jiayou" };
	char**p[] = { arr + 1,arr + 3,arr + 2,arr,arr + 4 };
	char***pp = p;
	printf("%s ", **pp);
	printf("%s    ", pp[3][0]);
	printf("%s ", **++pp);
	printf("%s ", (*pp)[-1]);
	printf("%s", pp[1][2]);//==*(*(pp+1)+2)




	return 0;
}