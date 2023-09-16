#include<stdio.h>
void display(int,char[]);
struct data{
	int roll;
	char name[20];
};
main()
{
	struct data d;
	printf("enter roll\n");
	scanf("%d",&d.roll);
	printf("enter name\n");
	scanf("%s",&d.name);
	display(d);
}
void display(struct data s)
{
	printf("roll - %d\nname - %s",s.roll,s.name);
}
