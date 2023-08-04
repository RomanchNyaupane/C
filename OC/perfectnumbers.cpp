#include<stdio.h>
main()
{
	int a,b,c=0,d,e;
	printf("enter a number");
	scanf("%d",&a);
	d=a;
	for(b=1;b<a;b++)
	{
		if(a%b==0)
		c=c+b;
	}
	if(d==c)
	printf("%d is a perfect number",d);
	else
	printf("%d is not perfect number",d);
}
