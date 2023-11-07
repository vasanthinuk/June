#include<stdio.h>
#include<string.h>

struct Student
{
	int id;
	char name[20];
	int age;
};

int main()
{
	struct Student s1[20];
	int n;
	printf("Enter no. of student details:");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("Enter id:");
		scanf("%d", &s1[i].id);
		printf("Enter name:");
		scanf("%s", s1[i].name);
		printf("Enter age:");
		scanf("%d", &s1[i].age);
	}

	for(int i = 0; i < n; i++)
	{
		printf("%d\t%s\t%d\n",s1[i].id,s1[i].name,s1[i].age);
		
	}

	return 0;
}

