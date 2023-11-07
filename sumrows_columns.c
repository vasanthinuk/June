#include<stdio.h>

int main()
{
	int a[20][20];
	int m;
	int n;
	int rsum[10];
	int csum [10];
	printf("Enter row size:");
	scanf("%d", &m);
	printf("Enter the size for n value:");
	scanf("%d", &n);
	printf("The first matrix insertion:\n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Element at a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("The first matrix is:\n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i < m; i++)
	{	
		rsum[i] = 0;
		for(int j = 0; j < n; j++)
		{
		
			
				rsum[i] = rsum[i] + a[i][j];
		}
	
	}
	for(int i = 0; i < m; i++)
	{
		csum[i] = 0;
		for(int j = 0; j < n; j++)
		{
			csum[i] = csum[i] + a[j][i];
		
		}
	}
	printf("The sum of rows and columns of a matrix:\n");
	for(int i = 0; i < m; i++)
	{	
		for(int j = 0; j < n; j++)
		{
			printf("%d   ", a[i][j]);
		}
		printf("%d   ", rsum[i]);
		printf("\n");
	}
	for(int j = 0; j < n; j++)
	{
		printf("%d  ", csum[j]);
	}
	printf("\n");
	
	return 0;
}
