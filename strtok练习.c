#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]={0};
	char str2[] = { "hello***" };
	char str3[] = { "world11111" };
	strcat_s(str,20, str2);//���ֵ�����ԭ��ʼ��
	strncat_s(str, 20, str3, 5);
	printf("%s\n", str);
	//strtok_sʹ�ã�
	char* str4 = str;// һ��char*����ԭ��������ָ�
	char* s = "*";//һ��char*�����ǣ�ע��Ҫ��""
	char* ret = NULL;// ��Ҫһ��char* ���淵��ֵ
	char* ret2 = NULL;//_s���裬һ��char*����ָ��
	for (ret=strtok_s(str4, s,&ret2); ret != NULL; ret=strtok_s(NULL, s,&ret2))
	{
		printf("%s\n", ret);
	}


	return 0;
}