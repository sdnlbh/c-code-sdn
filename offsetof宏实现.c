#include<stdio.h>
#include<stddef.h>
struct s
{
	char a;
	int b;
	char c;
	int d;
}s1;

#define OFFSETOF(s,n) (long long)&(((s*)0)->n)//��0ת��Ϊ�ṹ�����͵�ַ��Ԫ�شӵ͵��ߵ�ַ����
int main()
{
	printf("%lld\n", OFFSETOF(struct s, a));
	printf("%lld\n", OFFSETOF(struct s, b));
	printf("%lld\n", OFFSETOF(struct s, c));
	printf("%lld\n", OFFSETOF(struct s, d));
	return 0;
}