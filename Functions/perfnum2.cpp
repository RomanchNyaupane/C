#include<stdio.h>
int pnum(int n);
int fibo(int n);
int a,d,e,n,p,b,c;
int main()
{
	
	printf("enter a number");
	scanf("%d",&n);
	e=n;
	d=pnum(n);
	p=fibo(n);		
	return 0;
}
int pnum(int n)
{
	a=1,c=0;
	
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
	
	 a=0,b=1;
	for( e=1;e<=n;e++)
	{
	printf("%d\t",a);
	 c=a+b;
	a=b;
	b=c;	
	}
}
