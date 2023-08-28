#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int b,i; 
	srand(time(NULL));
	b=rand()%5;
	printf("%d",b);
}
