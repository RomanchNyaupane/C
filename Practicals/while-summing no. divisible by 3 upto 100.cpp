#include<stdio.h>
main()
{
	int a=0,b=0;	
	while(a<=100)
	{
	if(a%3==0)
	b=b+a;
	a++;
	}
	printf("the sum is%d",b);
}
