#include<stdio.h>
struct data{
	int rollno;
	struct dob{
		int day;
		int month;
		int year;
	}dob;
};
main()
{
	int a,b,c,d,i,j;
	printf("how many entries?\n");
	scanf("%d",&d);
	struct data data[d];
	printf("enter roll no of %d students\n",d);
	for(i=0;i<d;i++)
	{
		scanf("%d",&data[i].rollno);
	}
	printf("enter DOB\n");
	for(i=0;i<d;i++)
	{
		printf("dob of rollno %d::\n",data[i].rollno);
		printf("day\n");
		scanf("%d",&data[i].dob.day);
		printf("month\n");
		scanf("%d",&data[i].dob.month);
		printf("year\n");
		scanf("%d",&data[i].dob.year);
	}
	printf("you entered\n");
	for(i=0;i<d;i++)
	{
		printf("roll number:%d\n",data[i].rollno);
		printf("%d-",data[i].dob.day);
		printf("%d-",data[i].dob.month);
		printf("%d\n",data[i].dob.year);
	}	
}
