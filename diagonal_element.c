#include<stdio.h>

int main()
{
	int arr[10][10];
	int m;
	int n;
	int diagonal = 0;
	printf("Enter the row size:");
	scanf("%d", &m);
	printf("Enter the column size:");
	scanf("%d", &n);

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Element at arr[%d][%d]:", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	//to check the condition for diagonal elements

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j && arr[i][j]!=0)
			{
				diagonal = 1;
				break;
			}
		}
	}

	if(diagonal == 1)
	{
		printf("Matrix is not a diagonal");
	}
	else
	{
		printf("Matrix is diagonal");
	}

	return 0;
}

