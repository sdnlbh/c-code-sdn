#include<stdio.h>
#include<string.h>

void reserve(char* p1, char* p2)
{
	int len = p2 - p1+1;
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		char tmp = p1[left];
		p1[left] = p1[right];
		p1[right] = tmp;
		left++;
		right--;
	}
}


void left_move(char arr[], int n)
{
	int len = strlen(arr);
	reserve(arr,arr+n-1);//ÄæÐò×óÒÆ×Ö·û´®
	reserve(arr + n, arr + len - 1);//ÄæÐòºó°ë¶Î
	reserve(arr, arr + len - 1);//ÄæÐòÈ«¶Î

}


int main()
{
	char arr[] = { "abcdef" };
	left_move(arr, 3);
	printf("%s", arr);
	return 0;
}