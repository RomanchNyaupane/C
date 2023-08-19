#include<stdio.h>
main()
{
	int a=1,b=0,c,d;
	printf("enter a number:");
	scanf("%d",&b);
	printf("you can now input %d times\n\n",b);
	while(a<=b)
	{
		scanf("%d",&d);
		a++;
	}
	
}
