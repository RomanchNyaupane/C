#include<stdio.h>
void rev(int);
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	rev(a);
}
void rev(int x)
{
	int b,i;
	for(i=0;x>0;i++)
	{
		b=x%10;
		x=x/10;
		printf("%d",b);
	}
}
