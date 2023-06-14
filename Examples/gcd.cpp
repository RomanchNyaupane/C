#include<stdio.h>
int gcd(int a,int b)
{
	int i,c;
	for(i=1;i<=a && i<=b;i++)
	{
	if(a%i==0 && b%i==0)
	c=i;
	
	}
	return c;
}

main()
{
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	gcd(a,b);
	printf("gcd is %d",c);
}


