#include<stdio.h>
main()
{
	int a;
	printf("enter a value among 1 and 2");
	scanf("%d",&a);
	switch(a)
	{
		case (1):
			printf("area of triangle is				 (1/2)*b*h");
			break;
		case (2):
			printf("area of circle is pi*r^2");
			break;
		default:
			printf("please enter only one of 1 and 2");
	}
}
