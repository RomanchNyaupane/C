#include<stdio.h>
int strong(int);
main()
{
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	b=a;
	strong(a);
	if(b==strong(a))
	{
		printf("strong number\n");
	}
	else
	{
		printf("not strong");
	}
}
int strong(int a)
{
	int b;
	int i,j,c,d=0;
	for(i=1;a>0;i++)
	{
		c=1;
		b=a%10;
		for(j=1;j<=b;j++)
		{
			c=c*j;
		}
		d=d+c;
		a=a/10;
	}
	return d;
}
