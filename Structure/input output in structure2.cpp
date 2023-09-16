#include<stdio.h>
struct student
{
	int rollno;
	float percentage;
}s1;
main()
{
scanf("%d",&s1.rollno);
scanf("%f",&s1.percentage);
printf("Rollno:%d\n",s1.rollno);
printf("Percentage:%0.1f\n",s1.percentage);
}
