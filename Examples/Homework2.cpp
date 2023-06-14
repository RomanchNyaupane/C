#include<stdio.h>
int perfect(int a);
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	perfect(a);
	if(perfect(a)==a)
	{
		printf("perfect number");
	}
	else
	{
		printf("not perfect");
	}
}
int perfect(int a)
{
	int i,b=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			b=b+i;
		}
	}
	return b;
}
