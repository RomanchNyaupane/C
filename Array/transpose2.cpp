#include<stdio.h>
main()
{
	int i,j,temp;
	int x[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
			
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
			{
				temp=x[i][j];
				x[i][j]=x[j][i];
				x[j][i]=temp;
			}
			printf("%d\n\n\n\n",x[i][j]);
  		}
 	} 
}
