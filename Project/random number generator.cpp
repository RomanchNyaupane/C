#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a;
	srand(time(NULL));
	a=rand()%21;
	printf("%d",a);
}
