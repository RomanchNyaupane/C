#include<stdio.h>.
main()
{
	float a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		{
			if(a>c)
			printf("a is greatest",a);
			else
			printf("c is createst",c);
		}
	else
		if(b>c)
		printf("b is greatest",b);
		else
		printf("c is greatest",c);	
}

