#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* p1, const char* p2)//const��ֹ���δ����޸�p2����
{
	char* ret = p1;//�����һλԪ�ص�ַ�ش�
	assert(p1 != NULL);//�ж��Ƿ�Ϊ��ָ��
	assert(p2 != NULL);
	while (*p1++ = *p2++)//����++��ʹ�ú�++
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "nice try" };
	
	printf("%s", my_strcpy(arr1, arr2));//��ʽ����
	return 0;
}