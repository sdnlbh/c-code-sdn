#include<string.h>
#include<stdio.h>

int mylen(char arr[])//���ַ�������
{
	int count = 0;
	while (*arr++ != '\0')//�Ƚ����ú�Ӽ�
	{
		count++;
	}
	return count;
}

void reserve(char *arr)//��������
{
	char tmp = arr[0];
	int len = mylen(arr);
	arr[0] = arr[len-1];//�±���㿪ʼ
	arr[len-1] = '\0';
	if (mylen(arr+1) >= 2)
	{
		reserve(arr+1);
	}
	arr[len-1] = tmp;

}

int main()
{
	char arr[] = {"abcdef"};
	reserve(arr);
	printf("%s", arr);
	return 0;
}