#include<stdio.h>
void conv(int);
main()
{
	int a,i;
	printf("enter a number\n");
	scanf("%d",&a);
	conv(a);	
}
void conv(int a)
{
	int i,x[20];
	printf("binary equivalent:\n");
	for(i=0;a>0;i++)
	{
		x[i]=a%2;
		a=a/2;
		printf("%d",x[i]);
	}
}
