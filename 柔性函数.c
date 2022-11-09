#include<stdio.h>
#include<stdlib.h>

typedef struct s
{
	int a;
	int arr[0];
}s;

typedef struct s1
{
	int a;
	int* arr;
}s1;

int main()
{
	s* p = (s*)malloc(sizeof(s) + 5 * sizeof(int));//柔性数组
	if (p != NULL)
	{
		p->a = 100;
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			p->arr[i] = i;

		}
		for (i = 0; i < 5; i++)
		{
			printf("%d ", p->arr[i]);
		}

	}
	free(p);
	p = NULL;
	printf("\n");


	s1* p1 = (s1*)calloc(1, sizeof(s1));//柔性数组等效替代
	if (p1 != NULL )
	{
		p1->a = 100;
		p1->arr = (int*)calloc(5, sizeof(int));
		if (p1->arr != NULL)
		{
			int i = 0;
			for (i = 0; i < 5; i++)
			{
				p1->arr[i] = i;

			}
			for (i = 0; i < 5; i++)
			{
				printf("%d ", p1->arr[i]);
			}
			free(p1->arr);//先free里空间
			p1->arr = NULL;
		}
		free(p1);//后free外空间
		p1 = NULL;
	}








	return 0;
}