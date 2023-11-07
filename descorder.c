#include<stdio.h>

int main()
{
	int arr[30];
	int n;
	int temp;
	printf("Enter no. of elements to be entered to an array:");
	scanf("%d", &n);
	for(int i = 0; i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The descending order of elements are: ");
	for(int i = 0; i < n; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	return 0;
}
