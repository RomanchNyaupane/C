#include<stdio.h>
void prime();
main()
{
	prime();
}
void prime()
{
	int a,i,j;
	for(i=2;i<=100;i++)
	{
		a=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			a++;
		}
		if(a==1)
		printf("%d\t",i);
	}
}
