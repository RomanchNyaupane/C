#include <stdio.h>
main()
{
	float a,b,c;
	printf("enter the value of a and b and c:\n");
	scanf("%f %f %f",&a,&b,&c);
	if (a>b&&a>c)
	printf("greatest is a= %f",a);
	else if (b>a&&b>c)
	printf("b is greatest %f",b);
	else
	printf("c is greatest %f",c);
}
