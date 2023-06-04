#include<stdio.h>
#include<string.h>
struct student{
	int Roll_num;
	char Name[30];
	char Dept[30];
	struct dob{
		int day;
		int month;
		int year;
	}DOB;
	int Marks;
};
main()
{
	int a,i,j;
	printf("enter number of students\n");
	scanf("%d",&a);
	struct student data[a],b;
	for(i=0;i<a;i++)
	{
		printf("enter roll no.\n");
		scanf("%d",&data[i].Roll_num);
		getchar();
		printf("enter name\n");
		scanf("%[^\n]",data[i].Name);
		getchar();
		printf("enter department\n");
		scanf("%[^\n]",data[i].Dept);
		printf("enter date of birth\n");
		printf("year=");
		scanf("%d",&data[i].DOB.year);
		printf("month=");
		scanf("%d",&data[i].DOB.month);
		printf("day=");
		scanf("%d",&data[i].DOB.day);
		printf("enter marks\n");
		scanf("%d",&data[i].Marks);		
	}
	for(i=1;i<a;i++)
	for(j=0;j<a-i;j++)
	{
		if(strcmp(data[i].Name,data[i+1].Name))
		{
			b=data[i];
			data[i]=data[i+1];
			data[i+1]=b;
		}
	}
	for(i=0;i<a;i++)
	{
	printf("Name %s\n",data[i].Name);
	printf("Roll no %d\n",data[i].Roll_num);
	printf("Department %s\n",data[i].Dept);
	printf("Date of birth %d-%d-%d\n",data[i].DOB.day,data[i].DOB.month,data[i].DOB.year);
	printf("Marks %d\n",&data[i].Marks);
	}
}
