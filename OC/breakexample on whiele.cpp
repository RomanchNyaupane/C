#include<stdio.h>
main()
{
	int a=1,b;
	printf("how many times you want to enter");
	scanf("%d",&b);
	printf("you can now type %d times",b);
	while(a<=b)
	{
	
		scanf("%d",&b);
		if(b<0)
		{
			printf("please type positive number");
			continue;
		}
		scanf("%d",&b);
		++a;
	}
}
