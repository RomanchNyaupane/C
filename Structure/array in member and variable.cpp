
#include<stdio.h>
#include<conio.h>
struct data
{
	char name[15];
	float marks[4];
}d[3];
main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("enter name\n");
		scanf("%s",&d[i].name);
		printf("enter marks of %s on 4 subjects\n",d[i].name);
		for(j=0;j<4;j++)
		{
			scanf("%f",&d[i].marks[j]);
		}
	}
	for(i=0;i<3;i++)
	{
		printf("marks of %s\n",d[i].name);
		for(j=0;j<4;j++)
		{
			printf("%0.1f\n",d[i].marks[j]);
		}
	}
}
