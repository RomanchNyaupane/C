#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
main()
{
	time_t T;
	time(&T);
	int n,i,j,x[5],y[3],z[3],p[50];
	printf("How many users?\n");
	scanf("%d",&n);
	char a[100][100],b[5];
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the details of user %d:\n",i+1);
		printf("Name: ");
		scanf("%s",a[i]);
		printf("Date of birth (year-month-day): ");
		for(j=0;j<4;j++)
		{
			b[j]=getche();
			x[j]=b[j]-48;
		}
		printf("-");
		for(j=0;j<2;j++)
		{
			b[j]=getche();
			y[j]=b[j]-48;
		}
		printf("-");
		for(j=0;j<2;j++)
		{
		b[j]=getche();
		z[j]=b[j]-48;	
		}
		p[i]=x[0]*1000+x[1]*100+x[2]*10+x[3];
	}
	printf("\n\n");
	for(i=0;i<50;i++) {printf("*");}
	printf("\nCurrent Date/Time = %s", ctime(&T));
    printf("\n");
    for(i=0;i<50;i++){printf("*");}
    printf("\n");
	for(i=0;i<n;i++)
	{
		printf("birth year of %s is %d",a[i],p[i]);
	}
//	printf("\n%s is %d",a[0],p[0]);
}
