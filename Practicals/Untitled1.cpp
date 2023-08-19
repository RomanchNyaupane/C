#include<stdio.h>
main()
{
	float a,b,c,x,A,B,C;
	printf("enter your marks in physics:");
	scanf("%f",&a);
	printf("enter your marks in mathematices:");
	scanf("%f",&b);
	printf("enter your marks in programming:");
	scanf("%f",&c);
	printf("enter full marks of each subject:");
	scanf("%f%f%f",&A,&B,&C);
	x=((a+b+c)/(A+B+C))*100;
	printf("your percentage is:%0.2f",x);
}
