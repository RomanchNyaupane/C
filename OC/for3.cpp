#include<stdio.h>
main()
{
	int a,b=2;
	for(a=1;a<=20;a++)
	{
		if(a==b)
		{
			b=b+2;
			continue;
		}
		printf("%d\n",a);
	}
}

