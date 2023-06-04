#include<stdio.h>
int input1(int x[10][10],int a,int b);
int input2(int y[10][10],int a,int b);
int output(int z[10][10],int x[10][10],int y[10][10],int a,int b);
int i,j;
main()
{
	int a,b;
	printf("enter the size of matrix\n");
	scanf("%d%d",&a,&b);
	extern int i,j;
	int x[10][10],y[10][10],z[10][10];
	input1(x,a,b);
	input2(y,a,b);
	output(z,x,y,a,b);
}
int input1(int x[10][10],int a,int b)
{
	printf("enter a %d by %d matrix\n",a,b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
}
int input2(int y[10][10],int a,int b)
{
	printf("enter another %d by %d matrix\n",a,b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
}
int output(int z[10][10],int x[10][10],int y[10][10],int a,int b)
{
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			z[i][j]=x[i][j]*y[i][j];
			printf("%d\n",z[i][j]);
		}
	}
}
