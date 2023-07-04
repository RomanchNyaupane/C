#include<stdio.h>
main()
{
	int a=0,b=1,sum,i=0,n;
	printf("Enter a number");
	scanf("%d",&n);
	do
	{
	printf("%d\n",a);
	sum=a+b;
	a=b;
	b=sum;
	i++;
	}while(i<=n);	
}
