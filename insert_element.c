#include<stdio.h>

int main()
{
	int arr[20];
	int n;
	int val;
	int pos;
	printf("Enter n value:");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)//reading of elements
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the inserted value:");
	scanf("%d", &val);
	printf("Enter position:");
	scanf("%d", &pos);
	for(int i = n; i>=pos;i--)//moving of elenents to right side
	{
		arr[i] = arr[i-1];
	
	}
	arr[pos-1] = val;
	printf("After inserting the element:\n");
	for(int i = 0; i <= n; i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
