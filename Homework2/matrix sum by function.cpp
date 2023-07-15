#include<stdio.h>
int first(int x[10][10],int a,int b);
int second(int y[10][10],int a,int b);
int sum(int z[10][10],int x[10][10],int y[10][10],int a,int b);
int i,j;
main()
{
	int a,b;
	printf("enter dimension of matrix\n");
	scanf("%d%d",&a,&b);
	int x[10][10],y[10][10],z[10][10];
	first(x,a,b);
	second(y,a,b);
	sum(z,x,y,a,b);
}
int first(int x[][10],int a,int b)
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
int second(int y[10][10],int a,int b)
{
	printf("enter another %d by %d matrix\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		scanf("%d",&y[i][j]);
		}
	}
}
int sum(int z[10][10],int x[10][10],int y[10][10],int a,int b)
{
	printf("sum is:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
			printf("%d ",z[i][j]);
			if (j == b - 1)
			{
    		printf("\n");
    		}
		}
	}
}
