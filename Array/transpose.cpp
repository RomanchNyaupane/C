#include<stdio.h>
int input(int x[10][10],int a,int b);
int display(int x[10][10],int y[10][10],int a,int b);
main()
{
	int a,b,i,j;
	printf("enter dimension of matrix\n");
	scanf("%d%d",&a,&b);
	int x[10][10],y[10][10];
	input(x,a,b);
	display(x,y,a,b);
}
int input(int x[10][10],int a,int b)
{
	int i,j;
	printf("enter a %d by %d matrix\n",a,b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
}
int display(int x[10][10],int y[10][10],int a,int b)
{
	int i,j,temp;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			y[i][j]=x[j][i];
			printf("%d ",y[i][j]);
			if (j == b - 1)
    		printf("\n");
		}
	}
}
