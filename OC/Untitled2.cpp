#include<stdio.h>
main()
{
	int a,b=0,c,d,e;
	printf("enter a number");
	scanf("%d",&a);
	d=a;
	for(c=1;c<=a/2;c++)
	{
		if(a%c==0)
		{
		b=b+c;
		}
	}
	if(b==d)
	printf("perfect");
	else
	printf("nothing");
}
