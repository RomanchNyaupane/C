#include<stdio.h>
main()
{
	int i=1;
	int a=0;
	int b;
	printf("enter the value of b");
	scanf("%d",&b);
	while(i<=b)
	{
		a=a+i;
		i++;
				
	}
	printf("%d\n",a/b);
}
