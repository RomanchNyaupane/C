#include<stdio.h>
struct info
{
	int rollno;
	char name[50];
};
main()
{
	int a,i,j;
	printf("enter array size");
	scanf("%d",&a);
	struct info s[6];
	printf("enter roll no.");
	for(i=0;i<a;i++)
	{
		scanf("%d",&s[i].rollno);
	}
	printf("enter name");
	for(j=0;j<a;j++)
	{
		gets(s[j].name);
	}
	printf("you entered following");
	for(i=0;i<a;i++)
	{
		printf("%d",s[i].rollno);
	}
	for(j=0;j<a;j++)
	{
		printf("%s",s[j].name);
	}
}
