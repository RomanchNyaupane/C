#include<stdio.h>
int sum(int);
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	sum(a);
	printf("%d",sum(a));
}
int sum(int a)
{
	if(a==1)
	{
		return 1;
	}
	if(a==0)
	{
	return 0;
	}
	return(sum(a-1)+a);
}
