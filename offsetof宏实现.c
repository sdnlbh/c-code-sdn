#include<stdio.h>
#include<stddef.h>
struct s
{
	char a;
	int b;
	char c;
	int d;
}s1;

#define OFFSETOF(s,n) (long long)&(((s*)0)->n)//将0转化为结构体类型地址，元素从低到高地址排列
int main()
{
	printf("%lld\n", OFFSETOF(struct s, a));
	printf("%lld\n", OFFSETOF(struct s, b));
	printf("%lld\n", OFFSETOF(struct s, c));
	printf("%lld\n", OFFSETOF(struct s, d));
	return 0;
}