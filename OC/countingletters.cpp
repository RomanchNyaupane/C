#include<stdio.h>
main()
{
    char a[100];
    int b,c;
	c=0;
    printf("Please enter the string for count words\n");
    gets(a);
    for(b=0; a[b] != '\0'; b++)
	{
        if(a[b]!=' ')
        {
            a++;
        }
    }
    printf("The total characters of the given string= %d",a);
    getch[];
    return 0;
}
