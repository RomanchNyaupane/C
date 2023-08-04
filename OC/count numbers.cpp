#include<stdio.h>
main()
{
	int a,b=0,c;
	printf("enter a number");
	scanf("%d",&a);
	while(a!=0)
	{
	a=a/10;
	b++;	
	}
	printf("%d",b);
}
