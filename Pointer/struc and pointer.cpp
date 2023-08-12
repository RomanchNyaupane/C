#include<stdio.h>
struct stud{
	int a;
	char b[30];
}data[5],*p;
main()
{
	int a,b;
	p=data;
	data[0].a=11;
	data[0].b[9]='data';
	printf("%d %s",p->a,p->b);
}
