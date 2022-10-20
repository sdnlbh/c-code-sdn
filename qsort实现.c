#include<stdio.h>
#include<string.h>

struct stu
{
	int age;
	char name[20];
};


void swap(char* e1,char* e2,int width)//������ʵ��
{
	int i = 0;
	for (i = 0; i < width; i++)//���ÿ�Ƚ��н���
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void my_qsort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2))//qsort���壨����Ϊð�ݺ�����
{
	int i = 0;
	for (i = 0; i < sz; i++)//����
	{
		int j = 0;
		for (j = 0; j < sz -1- i; j++)//ÿ�˴���
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//����char*ÿ�μ���һ���ֽ����Ȳ�������ÿ��Ԫ�صĵ�ַ
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);//���ûص�������������ֹ�ƻ���ַѭ��
			}

		}
	}
}

int int_cmp(const void* e1, const void* e2)//ʹ�����Զ�������ͽ����뽻������
{
	return *(int*)e1 - *(int*)e2;
}

int s_cmp(const void* e1, const void* e2)
{
	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
}

int main()
{
	int arr[] = { 4,2,3,1,7,0,9,6,5,8 };
	struct stu s[] = { {20,"cv"},{17,"dd"},{18,"ca"},{21,"bb"} };
	int sz = sizeof(s) / sizeof(s[0]);
	my_qsort(s,sz,sizeof(s[0]),s_cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i].age);
		printf("%s\n", s[i].name);
	}
     
	return 0;
}