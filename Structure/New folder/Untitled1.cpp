#include<stdio.h>
#include<conio.h>
void show(struct data student[20],int a);
struct data{
	char name[20];
	int roll;
	struct DOB{
		int day;
		char month[20];
		int year;
	}dob;
};
main()
{
	int a,i;
	printf("enter number of student\n");
	scanf("%d",&a);
	struct data student[a];
	for(i=0;i<a;i++)
	{
		printf("enter name of student %d\n",i+1);
		scanf("%s",&student[i].name);
		printf("enter rollno\n");
		scanf("%d",&student[i].roll);
		printf("enter date of birth\n");
		printf("year ");
		scanf("%d",&student[i].dob.year);
		printf("month ");
		scanf("%s",&student[i].dob.month);
		printf("day ");
		scanf("%d",&student[i].dob.day);
	}
	show(student,a);
}
void show(struct data student[],int a)
{
	int i;
	for(i=0;i<a;i++){
	printf("name %s\n",student[i].name);
	printf("rollno %d\n",student[i].roll);
	printf("dob:\nyear%d\n",student[i].dob.year);
	printf("month %s\n",student[i].dob.month);
	printf("day %d\n",student[i].dob.day);
}
}
