#include<stdio.h>
float avg(int[100],int);
main()
{
	int b;
	printf("enter the size of array");
	scanf("%d",&b);
	int a[b];
	avg(a,b);
	printf("average is %0.1f",avg(a,b));
}
float avg(int a[],int b)
{
	int i,c=0;
	float d;
	printf("enter %d numbers",b);
	for(i=0;i<b;i++)
	{
		scanf(" %d", &a[i]);
			scanf("\n");
			c=c+a[i];
	}
	d=float(c/b);
	return d;
}
