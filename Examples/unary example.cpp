#include<stdio.h>
main()
{
	float a,b;
	printf("enter the value of a");
	scanf("%f",&a);
	printf("enter the value of b");
	scanf("%f",&b);
	float x=--a, y=--b;
	float sum=x+y;
	printf("the sum is %0.2f",sum);
}
