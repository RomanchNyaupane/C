#include<stdio.h>
void avg(int[],int);
main()
{
	int b;
	printf("enter size of array\n");
	scanf("%d",&b);
	int a[b];
	avg(a,b);
}
void avg(int p[],int q)
{
	int i;
	float d,c=0;
	printf("enter %d numbers\n",q);
	for(i=0;i<q;i++)
	{
	scanf("%d",&p[i]);
	c=c+p[i];
	}
	d=float(c/q);
	printf("average is %0.2f\n",d);
}

