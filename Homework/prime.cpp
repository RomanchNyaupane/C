#include<stdio.h>
main()
{
	int a,b=0,c=0,i;
	printf("Enter a number");
	scanf("%d",&a);
	b=a/2;
	for(i=2;i<=b;i++)
	{
	if(a%i==0)
	{
	printf("Number is not prime");
	c=1;
	break;
	}
	}
	if(c==0)
	printf("Number is prime");
}
