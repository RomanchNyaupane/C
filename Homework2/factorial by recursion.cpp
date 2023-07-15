#include<stdio.h>
int fact(int);
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	fact(a);
	printf("%d",fact(a));
}
int fact(int n)
{
	int c;
	if(n==0)
	return 1;
	c=n*fact(n-1);
	return c;
}
