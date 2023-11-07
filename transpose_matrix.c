#include<stdio.h>

int main()
{
	int a[20][20];
	int m;
	int n;
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


	printf("The transpose of matrix is:\n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d  ", a[j][i]);
		}
		printf("\n");
	}

	return 0;
}
