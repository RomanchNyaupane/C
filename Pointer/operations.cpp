#include<stdio.h>
main()
{
	int a=5,b=6;
	int *p,*q;
	p=&a;q=&b;
	//printf("add: %d\n",p+q);
	//printf("multiply: %d\n",(p)/(q));
	printf("subtract: %d",p-q);
}
