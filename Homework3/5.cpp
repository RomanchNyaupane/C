#include<stdio.h>
#include<conio.h>
#include<time.h>
int age_calculator(int ,int,int,struct data[],int);
struct data{
	char name[20];
	int year;
	int month;
	int day;
	
};
main()
{
	time_t x;
	x=time(NULL);
	struct tm tm=*localtime(&x);
	int a,c,i;
	printf("How many users?\n");
	scanf("%d",&a);
	int b[a];
	struct data d[10];
	printf("\n");
	for(i=0;i<a;i++)
	{
		printf("Enter the details of user %d:\n",i+1);
		printf("Name: ");
		scanf("%s",d[i].name);
		printf("Date of birth (year-month-day): ");
		scanf("%d%d%d",&d[i].year,&d[i].month,&d[i].day);
	}
	for(i=0;i<50;i++){printf("*");}
	printf("\nToday is %d-%d-%d\n", tm.tm_year+1900 ,tm.tm_mon+1, tm.tm_mday);
	for(i=0;i<50;i++){printf("*");}
	printf("\n\n");
	age_calculator(tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday,d,a);
}
int age_calculator(int a,int b,int c,struct data d[],int n)
{
	int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int x,y,z,z1,i;
	y=b;
	z=c;
	z1=a;
	for(i=0;i<n;i++)
	{
		if(d[i].day>c)
		{
			c=c+days_in_month[(d[i].month)-1];
			b=b-1;
		}
		if(d[i].month>b)
		{
			a=a-1;
			b=b+12;
		}
		x=a-d[i].year;		
		printf("%s is %d years old\n",d[i].name,x);
		b=y;
		c=z;
		a=z1;
	}
}
