#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int n;
	printf("Enter the number of elements to be entered:");
	scanf("%d", &n);
	ptr = (int*)malloc(n*sizeof(int));
	if(ptr == NULL)
	{
		printf("Memory is not allocated:\n");
		exit(1);
	}
	else
	{
		printf("Memory is allocated:\n");
		for(int i = 0; i < n; i++)
		{
			scanf("%d",(ptr+i));
		}
		printf("The elements of array are:\n");
		for(int i = 0;i < n;i++)
		{
			printf("%d   ", *(ptr+i));
		}
	}
	return 0;
}
