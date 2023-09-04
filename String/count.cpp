#include<stdio.h>
#include<string.h>
int i;
main()
{
	char name[25];
	printf ("\n************Enter your full name*********** \n");
	gets(name);
	puts("Hello!");
	puts(name);
	int lenth=strlen(name);
	printf("Length of string is: %d\n",lenth);
	//scanf("%d");
	printf ("\n\n********Enter your address************ \n") ;
	scanf ("%s",name);
	printf ("%s\n",name);
	printf("length of the second string: %d\n",strlen(name));
}
