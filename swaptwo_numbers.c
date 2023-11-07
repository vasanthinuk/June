#include<stdio.h>

int swap_numbers(int*, int*);

int main()
{
	int a;
	int b;
	int c;
	printf("Enter a and b values:");
	scanf("%d %d", &a, &b);
	printf("Before swapping of two numbers: %d %d\n", a, b);
	swap_numbers(&a, &b);
	printf("The swapping of 2 numbers:%d %d\n", a,b);
	return 0;
}

int swap_numbers(int* num1, int* num2)
{
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}
