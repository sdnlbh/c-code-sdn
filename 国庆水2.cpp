#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{   
	char arr[] = {"Happy National Day"};
	char arr2[19] = {"                  "};
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		arr2 [left] = arr [left];
		arr2[right] = arr[right];
		printf("%s", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s",arr2);

	return 0;
}
