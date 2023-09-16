#include<stdio.h>
#include<conio.h>
struct data{
	int rollno;
	char name[20];
}d[20],x;
main()
{
	int p,i,j;
	printf("how many students?\n");
	scanf("%d",&p);
	printf("enter roll numbers\n");
	for(i=0;i<p;i++)
	{
		scanf("%d",&d[i].rollno);
	}
	printf("enter names\n");
	for(i=0;i<p;i++)
	{
		gets(d[i].name);
	}
	for(i=0;i<p;i++)
	{
		printf("%d\n",d[i].rollno);
		printf("%s\n",d[i].name);
	}
}
