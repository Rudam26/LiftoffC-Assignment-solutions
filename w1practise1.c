#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if(a>0)
	{
		printf("It is positive number ");
	}
	else if(a<0)
	{
		printf("It is negative number");
	}
	else
	{
		printf("It is zero");
	}
	return 0;
}