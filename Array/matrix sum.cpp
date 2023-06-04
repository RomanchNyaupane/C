#include<stdio.h>
main()
{
	int a,b,i,j;
	printf("enter size of matrix\n");
	scanf("%d%d",&a,&b);
	printf("processing for %d by %d matrix...\n",a,b);
	int x[a][b],y[a][b],z[a][b];
	printf("enter a matrix\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("enter another matrix\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	printf("sum::\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
			printf("%d\n",z[i][j]);
		}
	}
}
