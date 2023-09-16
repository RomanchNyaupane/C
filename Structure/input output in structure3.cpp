#include<stdio.h>
struct student
{
	int roll;
	char name[1000];	
};
main()
{
	struct student s1,s2,s3;
	printf("enter roll number\n");
	scanf("%d%d%d",&s1.roll,&s2.roll,&s3.roll);
	getchar();
	printf("enter name\n");
	gets(s1.name);
	gets(s2.name);
	gets(s3.name);
	printf("names:\n%s\n%s\n%s\n",s1.name,s2.name,s3.name);
	printf("roll no:\n%d\n%d\n%d\n",s1.roll,s2.roll,s3.roll);
}
