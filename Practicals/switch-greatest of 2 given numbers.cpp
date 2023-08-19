#include <stdio.h>
main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1:
			printf("a is greatest");
			break;
		case 0:
			printf("b is greatest");
			break;
	
	}
}
