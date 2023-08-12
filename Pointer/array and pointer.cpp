#include<stdio.h>
double avg(int [],int);
main()
{
	int a[5]={1000,2,3,17,50};
	double b=avg(a,5);
	printf("%0.2f\n",b);
}
double avg(int a[],int size)
{
	int b=0,i;
	double c;
	for(i=0;i<size;i++)
	{
		b=a[i]+b;	
	}
	c=(double)b/size;
	return c;
}
