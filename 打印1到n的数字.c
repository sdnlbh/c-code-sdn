#include<stdio.h>
#include<stdlib.h>

struct num
{
	int sz;
	int arr[0];
};

int main()
{
	int n = 0;
	printf("��Ҫ��ӡ��������");
	scanf_s("%d", &n);
	struct num* s = (struct num*)malloc(sizeof(int)+n * sizeof(int));//�ڴ濪��
	if (s == NULL)
	{
		printf("error");
		exit(EXIT_FAILURE);
	}
	s->sz = n;
	int i = 0;
	for (i = 0; i < s->sz; i++)
	{
		s->arr[i] = i + 1;
		printf("%d ", s->arr[i]);
	}
	free(s);//�ͷ��ڴ�
	s = NULL;

	return 0;
}
