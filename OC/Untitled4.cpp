#include<stdio.h>
main()
{
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	b=a%2;
	if(b==1)
	printf("the number is odd");
	else
	printf("the number is even");
}
