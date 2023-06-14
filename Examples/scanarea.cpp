#include<stdio.h>
#include<math.h>
#define pi 3.1415
main()
{
	float r;
	float a;
	printf("enter the value of radius:");
	scanf("%f",&r);
	a=pi*pow(r,2);
	printf("the area of circle is %0.3f",a);
}
