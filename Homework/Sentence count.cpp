#include<stdio.h>
main()
{
	int i=1,a=1;
	char b[100];
	printf("Enter a sentence::");
	gets(b);
	while(b[i]!='\0')
	{
		if(b[i]==' ')
		{
		i++;
		continue;
		}
	i++;
	a++;
	}
	printf("There are %d letters in the sentence",a);
}
