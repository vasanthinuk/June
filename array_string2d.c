#include<stdio.h>

int main()
{
	char str[5][10];
	printf("Enter strings:\n");
	for(int i = 0; i < 5; i++)
	{
		scanf("%s", str[i]);
	}
	printf("The strings are:\n");
	for(int i = 0; i < 5; i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}
