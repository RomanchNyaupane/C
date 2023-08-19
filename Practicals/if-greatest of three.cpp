#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value of a");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("a is greater");
	}
	if(b>a)
	{
		if(b>c)
		printf("b is greater");
		else
		printf("c is gerater");
	}
}
