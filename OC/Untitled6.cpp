#include<stdio.h>
main()
{
	float a,b,c;
	printf("enter three numbers");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b&&a>c)
	printf("a is greatest %f",a);
	else if(b>c&&b>a)
	printf("b is greatest %f",b);
	else
	printf("c ia greatest %f",c);
}
