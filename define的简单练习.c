#include <stdio.h>
#define add(x) printf(#x"*"#x" is %d\n",x+x)
#define add2(name,num) name##num+=1
int main()
{

	int i = 10;
	int i3 = 2;
		add(i);
	int tem = add2(i, 3);
	printf("%d", tem);
	return 0;
}