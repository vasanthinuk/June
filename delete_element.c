#include<stdio.h>

int main()
{
	int arr[20];
	int n;
	int pos;
	int i;
	printf("Enter number of elements to be entered:");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the position of element to be deleted:");
	scanf("%d", &pos);

	for(int i = 0; i < n; i++)
	{
		if(arr[i] == pos)
		{
			for(int j = i; j < n; j++)
			{
				arr[j] = arr[j+1];
			}
			n--;
			i--;
		}
	}
	/*while(i != pos-1)
	{
		i++;
	}
	while(i < n)
	{
		arr[i] = arr[i+1];
		i++;
	}
	n--;*/
	printf("The new list is:");
	for(int i = 0; i < n; i++)
	{
		printf("%d    ", arr[i]);
	}
	return 0;
}

