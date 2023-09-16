#include<stdio.h>
struct data
{
	int rollno;
	float marks[3];
};
main()
{
	struct data s[3];
	int a,i,j;
	printf("enter roll and then marks");
	for(i=0;i<3;i++)
	{
		
		scanf("%d",&s[i].rollno);
		for(j=1;j<3;j++)
		scanf("%f",&s[i].marks[j]);
	}
	printf("you entered:");
	for(i=0;i<3;i++)
	{
		printf("marks for roll %d\n",s[i].rollno);
		for(j=1;j<3;j++)
		printf("%f\n",s[i].marks[j]);
	}
}

