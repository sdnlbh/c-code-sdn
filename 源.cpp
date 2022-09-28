#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr[] = "hello world";
	char arr2[] = "           ";	
	int left = 0;
	int right = strlen(arr)-1;
	while (left <= right)
	{
		arr2[left] = arr[left];
		arr2[right] = arr[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;







	}
	printf("%s\n", arr2);






	return 0;
}