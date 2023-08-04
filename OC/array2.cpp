#include<stdio.h>
main()
{
	int a,n,b=1,d=0,e;
	printf("how many numbers?\n");
	scanf("%d",&n);
	int c[n];
	printf("enter %d numbers",n);
	while(b<=n)
	{
		scanf("%d",&c[e]);
		d=d+c[e];
		b++;
	}
	printf("sum is %d\n",d);
	printf("average is %f",float(d/n));
}
