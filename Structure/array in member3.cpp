#include<stdio.h>
#include<conio.h>
struct data
{
	char name[50];
	float marks[4];
}d;
main()
{
	int i,j;
	printf("enter name of student\n");
	scanf("%s",&d.name);
	printf("enter marks of %s\n",d.name);
	for(i=0;i<4;i++)
	{
		scanf("%f",&d.marks[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("%0.1f\n",d.marks[i]);
	}
}
