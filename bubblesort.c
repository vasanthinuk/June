#include<stdio.h>

int* sort(int a[] ,int n );

int main()
{
	int arr[30];
	int n;
	int *ptr;
	printf("Enter number of elements to be entered:");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("Element at arr[%d]:", i);
		scanf("%d", &arr[i]);
	}
	ptr = sort(arr,n);
	for(int i = 0;i < n; i++)
	{
		printf("%d  ",*(ptr+i));
	}
	return 0;
}

int* sort(int a[], int n)
{
	int temp;
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return a;

	
}

