#include<stdio.h>

int main()
{
	int a[20][20];
	int b[20][20];
	int c[20][20];
	int n;
	printf("Enter the size for n value:");
	scanf("%d", &n);
	printf("The first matrix insertion:\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Element at a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("The second matrix insertion:\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Element at b[%d][%d]:", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	printf("The first matrix is:\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	printf("The second matrix is:\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("The addition of two matrix is:\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d  ", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
