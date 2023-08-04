#include<stdio.h>
main()
{
	int a;
	printf("enter a year");
	scanf("%d",&a);
	if(a%4==0&&a%400==0&&a%100==0)
	printf("that is leap year");
	else
    printf("that is not leap year");
}
