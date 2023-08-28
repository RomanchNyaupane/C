#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int counting_part(char word_group_1[][30],int b);
main()
{
	int b,i;
	char a[2];
	printf("Select category of words\nT for tech\nP for politics\nF for foods\nS for sports");
	scanf("%s",a);
	if(!((a==("T" or "t" or "1")) || (a==("P" or "t" or "2"))||(a==("F" or "f" or "3"))||(a==("S" or "s" or "4"))))
	{
		for(i=1;i<=5;i++)
		{
		printf("Please select valid category\n");
		scanf("%s",a);
		if(a==("T" or "t" or"1") || a==("P" or "p" or "2")||a==("F" or "f" or "3")||a==("S" or "s" or "4"))
		break;
		}
	}
}
