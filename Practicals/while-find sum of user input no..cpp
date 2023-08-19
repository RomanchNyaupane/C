#include<stdio.h>
main()
{
	float a=0,b=0,n;
	printf("enter a number");
	scanf("%f",&n);
	while(a<=n)
	{
		b=b+a;
		a++;
	}
	printf("sum is%0.1f",b);
	}
