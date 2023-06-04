#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("how many numbers do you want to check?\n");
	scanf("%d",&a);
	int f[a];
	printf("enter %d numbers\n");
	for(b=0;b<a;b++)
	{
		scanf("%d",&f[b]);
	}
	for(b=0;b<a-1;b++)
	{
		for(c=0;c<a-1-b;c++)
		{
			if(f[c]>f[c+1])
			{
				d=f[c];
				f[c]=f[c+1];
				f[c+1]=d;
			}
		}
	}
	printf("\nascending order:\n");
	for(b=0;b<a;b++)
	{
		printf("%d\t",f[b]);
	}
}
