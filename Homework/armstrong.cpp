#include<stdio.h>
main()
{
	int a,b,c,d=0,e;
	
	printf("enter a number");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		c=a%10;
		e=c*c*c;
		d=d+e;
		a=a/10;
	}
	a=b;
	if(a==d)
	printf("armstrong");
	else
	printf("not armstrong");
}
