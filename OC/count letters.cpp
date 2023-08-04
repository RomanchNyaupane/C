#include<stdio.h>
main()
{
	char a[25];
	int b=0;
	int c=0;
	printf("enter your name");
	gets(a);
	while(a[b]!='\0')
	{
	if(a[b]==' ')
	{
		b++;
		continue;
	}
	
	b++;
	c++;
}printf("%d",c);
}
