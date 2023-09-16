#include<stdio.h>
struct People
{
	char name[45];
	int age;
	float height,weight;
	char address[30];
}s[1200];
main()
{
	int n,i;
	printf("enter size of structure variable");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(s[i].name);
	}
	for(i=1;i<=n;i++)
	puts(s[i].name);
}
