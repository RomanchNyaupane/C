#include<stdio.h>
main()
{
	int a,b,i,c=0;
	printf("enter a number");
	scanf("%d",&a);
	for(i=2;i<=(a/2);i++)
	{
	if(a%i==0)
	{
	printf("not prime");
	c=1;
	break;
	}
}
	if(c==0)
	printf("number is not prime");
	
	
}
