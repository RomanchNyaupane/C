#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0)); 		//returns time_t that changes every time
	printf("%d\n",rand()%100);
	printf("%d\n",rand()%7);
	printf("%d\n",rand()%3);
	printf("p1");
}

