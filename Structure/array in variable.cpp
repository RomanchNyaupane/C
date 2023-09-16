#include<stdio.h>
struct data
{
	char name[50];
	float gpa;
}d[5],e[5];
main()
{
	int i;
	printf("enter name of students:\n");
	for(i=0;i<3;i++)
	{
		gets(d[i].name);
	}
	for(i=0;i<3;i++)
	{
		printf("enter gpa of %s:\n",d[i].name);
		scanf("%f",&e[i].gpa);
	}
	for(i=0;i<3;i++)
	{
		printf("%s got %0.1f\n",d[i].name,e[i].gpa);
	}
}

