#include<stdio.h>


int main()
{
	int arr[10][10];
	int m;
	int n;
	int diagonal;
	printf("Enter the row size of a matrix:");
	scanf("%d", &m);
	printf("Enter the column size of a matrix:");
	scanf("%d", &n);

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n;j++)
		{
			printf("Enter elements arr[%d][%d]::", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	diagonal = arr[0][0];
	for(int i = 1; i < m; i++)
	{
		
			if(arr[i][i] != diagonal)
			{
				printf("False");
			}
			/*else
			{
				printf("True");
			}*/
	}
	printf("true");
	

	/*if(m == n)
	{
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i == j)
				{
					printf("\t%d", arr[i][j]);
				}
				else
				{
					printf("\t");
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrix is not a square matrix");
	}*/
	return 0;
}


