#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>>d)
	printf("a is greatest");
	else
	{
		if(b>c&&b>a&&b>c)
		printf("b is greatest");
		if(c>a&&c>b&&c>>d)
		printf("c is greatest");
	    else
		printf("d is greatest");
	}
		
	
}
