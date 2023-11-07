#include<stdio.h>

int main()
{
	int arr[20];
	int n;
	int j, k;
	int count ;
	printf("Enter n value:");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i++)
	{	
		count = 0;
		for(j = 0, k = n; j < k+1; j++)
		{
			if(i!=j)
			{
				if(arr[i] == arr[j])
				{
					count++;
				}
			}
		}
	
		if(count == 0)
		{
			printf("%d  ", arr[i]);
		}
	}
	return 0;
}
	


