#include<stdio.h>

int main()
{
	int arr[20];
	int n;
	int small;
	int smallpos;
	printf("Enter number of elements to be entered to array:");
	scanf("%d", &n);
	for( int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	small = arr[0];
	for(int i = 0; i < n; i++)
	{
		if(arr[i] < small)
		{
			small = arr[i];
			smallpos = i;
		}
	}
	printf("The smallestelement  %d and  position element is:%d \n", smallpos,small);
	printf("The smallest element is:%d\n", small);
	return 0;
}
