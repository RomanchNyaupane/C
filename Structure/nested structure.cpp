#include<stdio.h>
struct student_data
{
	char name[50];
	int rollno;
	struct DOB
	{
		int day;
		int month;
		int year;
	}d;
}s;
main()
{
	scanf("%s",&s.name);
	scanf("%d",&s.rollno);
	scanf("%d",&s.d.day);
	scanf("%d",&s.d.month);
	scanf("%d",&s.d.year);
}
