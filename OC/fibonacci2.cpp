#include<stdio.h>
main()
{
	int a,b,c,d,e;
	a=0,b=1;
	printf("enter a number");
	scanf("%d",&d);
	for(e=1;e<=d;e++)
	{
	printf("%d\t",a);
	c=a+b;
	a=b;
	b=c;	
	}
}
