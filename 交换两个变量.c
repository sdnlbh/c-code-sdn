#include<stdio.h>
//��ַ������ԭ��ֱ�ӸĶ�����ϰ��
void switch1(int* a, int* b)//��ʱ����������
{
	int temp = 0;
        temp = *b;
	    *b = *a;
        *a = temp;
}

void switch2(int* a, int* b)//�Ӽ����������������������
{
	*a = *a + *b;
	*b =*a - *b;
	*a = *a - *b;
}

void switch3(int* a, int* b)//��򽻻���
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;

}

int main()
{
	int a = 3;
	int b = 7;
	switch3(&a, &b);
	printf("%d\n", a);
	printf("%d", b);

	return 0;
}