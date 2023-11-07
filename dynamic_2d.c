#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m;
	int n;
	int *ptr;//creating a pointer
	printf("Enter m value:");
	scanf("%d", &m);
	printf("Enter n value:");
	scanf("%d", &n);
	ptr = (int *)malloc(m* n * sizeof(int));//memory allocation for 2d arrays

	if(ptr == NULL)//checking whether the pointer is NULL or not
	{
		printf("Memory is not allocated:");
		exit(1);
	}
	else
	{
		printf("Memory is allocated:\n");
		for(int i = 0; i < m; i++)//rows
		{
			for(int j = 0; j < n; j++)//cols
			{
				*(ptr + i*n + j) = i+j;
			}
		}
	}
	printf("The matrix elements are:");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", *(ptr + i * n + j));
		}
		printf("  ");
	}
	free(ptr);
	return 0;
}
