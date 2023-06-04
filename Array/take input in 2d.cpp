#include<stdio.h>
main()
{
	int a,b,i,j;
	printf("enter numbers of row and columns");
	scanf("%d%d",&a,&b);
	int x[a][b],y[a][b];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("enter another matrix");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}			
}
