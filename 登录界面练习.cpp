#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char pass[20] = { 0 };
	for (i = 0; i < 3; i++)
	{   
		scanf_s("%s", pass,7);
		if (strcmp(pass, "123456") == 0)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;


		}
		

	}

	if (i == 3)
		printf("µÇÂ½Ê§°Ü");


	return 0;
}