#include<stdio.h>

int main()
{
	int arr[3][4];
	int sum = 0;
	printf("Enter elements to an 2D- array:\n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The elements of matrix is:\n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%d   ", arr[i][j]);
			
		}
		printf("\n");
	}
	printf("The sum of elements of an array:");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			sum = sum + arr[i][j];
		}
		printf("\n");
	}
	printf("Sum of matrix:%d", sum);
	return 0;
}
