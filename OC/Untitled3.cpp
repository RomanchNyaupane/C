#include<stdio.h>
main()
{
	int a,b,c=0,d,e;
	printf("enter a value of a");
	scanf("%d",&a);
	d=a;
	while(a!=0)
	{
		b=a%10;
		c=c+b;
		a=a/10;
	}
	e=c*c*c;
	if(e==d)
	printf("dudeney");
	else
	printf("no dudeney");
}
