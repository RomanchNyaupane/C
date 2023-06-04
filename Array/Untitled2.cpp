#include<stdio.h>
int input(int x[],int a);
int process(int x[],int a);
int output(int x[],int []);
main()
{
	int a;
	printf("enter size of array\n");
	scanf("%d",&a);
	int x[a];
	input(x,a);
	process(x,a);
	output(x,x);
}
int input(int x[],int a)
{
	int i;
	printf("enter %d numbers\n",a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&x[i]);
	}
}
int process(int x[],int a)
{
	int b,i;
	printf("enter how many time to multiply\n");
	scanf("%d",&b);
	for(i=0;i<a;i++)
	{
		x[i]=x[i]*b;
	}
}
int output(int x[10],x[4] )
{
	int i;
	printf("output:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",x[i]);
	}
}
