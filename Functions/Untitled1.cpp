#include<stdio.h>
int print(int a,int b)
{
	printf("enter a number");
	scanf("%d%d",&a,&b);
	return a+b;
}
main()
{
	int a,b;
int sum=print(a,b);
printf("sum is %d",sum);
}
