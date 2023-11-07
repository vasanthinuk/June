#include<stdio.h>

int main()
{
	int arr[20];
	int n;
	printf("Enter number of elements to be entered:");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Repeating elements are:");
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(arr[i] == arr[j])
			{
				
				printf("%d  ",arr[i]);
			}
			
		}
	}
	return 0;
}
