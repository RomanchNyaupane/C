#include<stdio.h>
void sum(int p,int q);
void difference(int x,int y);
void product(int p,int q);
void division(int t,int k);
void prime(int x,int y);
main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	sum(a , b);
	
	difference(a ,b);
	product(a ,b);
	division(a ,b);
	prime(a,b);
}
void sum(int p,int q)
{
	int r=p+q;
	printf("the sum is %d\n\n\n\n",r);
}
void difference(int x,int y)
{
	if(x>y)
	printf("the difference is %d \n\n\n\n",x-y);
	else
	printf("the difference is %d \n\n\n\n",y-x);
}
void product(int p,int q)
{
	int c=p*q;
	printf("product is %d \n\n\n\n",c);
}
void division(int t,int k)
{
	float v=float (t/k);
	printf("quotient is %0.1f\n\n\n\n",v);
}
void prime(int x,int y)
{
	int a;
	for(a=2;a<=x,a<=y;a++)
	{
	if(x%a==0)
	printf("%d is not prime",x);
	else
	printf("%d is prime",x);
	}
	{
	if(y%a==0)
	printf("%d is not prime",y);
	else
	printf("%d is prime",y);
	}
}
