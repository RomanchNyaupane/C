#include<stdio.h>
int gcd (int a,int b)
	{
	if(b==0)
	{
	return a;
	}
	else if(b==0)
	{
	return a;
	}
	else
	{
	return (b,a%b);
	}
}
int main()
	{
int a,b,d;
printf("enter any two no");
scanf("%d%d",&a,&b);
d=gcd (a,b);
printf(" gcd is %d",d);
}
