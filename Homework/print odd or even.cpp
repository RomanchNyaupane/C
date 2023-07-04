#include<stdio.h>
main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Given number is even");
	}
	else
	{
		printf("Given number is odd");
	}
}
