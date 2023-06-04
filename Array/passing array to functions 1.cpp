#include<stdio.h>
int change(int[]);
main()
{
	int i;
	int a[]={1,2,3,4,5};
	change(a);
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}
int change(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		a[i]=a[i]+5;
	}
	
}
