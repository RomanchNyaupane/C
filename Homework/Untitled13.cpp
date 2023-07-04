




#include<stdio.h>
main()
{
	int a,b,c=0,d;
	printf("enter number");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		c++;
	}
	printf("%d",c);
}
