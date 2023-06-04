#include<stdio.h>
main()
{
	int a[100],i,x=0;
	printf("enter 5 numbers");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=4;i++)
	{
	x=a[i]+x;	
	}
	float mean=x/5.0;
	printf("mean is\t%0.2f",mean);
}
