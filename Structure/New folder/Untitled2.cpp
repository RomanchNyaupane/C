#include<stdio.h>
struct student{
	int rollno;
	int marks[3];
};
main()
{
	int a,j,b,i;
	printf("enter no. of student\n");
	scanf("%d",&a);
	struct student data[a];
	for(i=0;i<a;i++)
	{
		printf("enter rollno for student %d\n",i+1);
		scanf("%d",&data[i].rollno);
		for(j=0;j<3;j++)
		{
			printf("mark%d \n",j+1);
			scanf("%d",&data[i].marks[j]);
		}	
	}	
	for(i=0;i<a;i++)
	{
		printf("roll %d",data[i].rollno);
		for(j=0;j<3;j++)
		{
			printf("mark%d \n%d",j+1,data[i].marks[j]);
		}
	}
}
