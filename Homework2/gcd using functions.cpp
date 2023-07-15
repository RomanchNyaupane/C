#include<stdio.h>
int gcd(int p,int q);
main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	int hcf=gcd(a,b);
	printf("value is %d",hcf);
}
int gcd(int p,int q)
{
int c,i=1;	
	while(i<=p&&i<=q)
	{
		if(p%i==0&& q%i==0)
		c=i;
		i++;
	}
	return c;
}
