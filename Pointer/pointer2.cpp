#include<stdio.h>
main()
{
	int i=100;
	int *ptr=&i;
	printf("i=%d\n",i);
	printf("ptr=%d\n",ptr);
	printf("a=%d",&i);
}

