#include<stdio.h>
main()
{
	int a[]={1,2,3,4,5,6,7};
	int *p=&a[0];
	int *q=&a[5];
	printf("%d\n",*q-*p);
}
