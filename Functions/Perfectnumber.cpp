#include<stdio.h>
int main()
{
	int a,d,e,n,p;
	printf("enter a number");
	scanf("%d",&n);
	e=n;
	d=pnum(n);
	p=fibo(n);		
	return 0;
}
int pnum(int n)
{
	int a=1,c=0;
	
	while(a<=n/2)
	{
		if(n%a==0)
		{
		c=c+a;	
		}
		a++;
	}
	if(c==n)
	printf("perfect\n");
	else
	printf("not perfect\n");
	return c;
}
int fibo(int n)
{
	int a,b,c,d,e;
	a=0,b=1;
	for(e=1;e<=n;e++)
	{
	printf("%d\t",a);
	c=a+b;
	a=b;
	b=c;	
	}
}

