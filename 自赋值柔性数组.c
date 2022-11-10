#include<stdio.h>
#include<stdlib.h>
typedef struct s1
{
	int a;
	int arr[0];
}s1;


int main()
{
	int n = 0;
	scanf_s("%d", &n);//自赋值柔性数组
	s1* a1 = (s1*)malloc(sizeof(int) + n * sizeof(int));
	if (a1 != NULL)
	{
		int i = 0;
		a1->a = 100;
		for (i = 0; i < n; i++)
		{
			a1->arr[i]=i;
		}
		for (i = 0; i < n; i++)
		{
			printf("%d ", a1->arr[i]);
		}
		printf("\n%d", a1->a);
		free(a1);
		a1 = NULL;
		
	}

	return 0;
}