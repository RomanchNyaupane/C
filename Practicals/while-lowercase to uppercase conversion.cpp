#include<stdio.h>
main()
{
	float a=1.0;
	float b=0.0;
	while(a<=10)
	{
		b=b+a;
		
		a=a+1;
	}
	printf("the sum is %0.1f\n",b);
	float c=(b/10);
	printf("average=%0.1f",c);
}
