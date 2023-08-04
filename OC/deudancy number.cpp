#include<stdio.h>
int main()
{
	int a,b,c,d,sum=0;
	printf("enter any number");
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		c=b%10;
		sum=sum+c;
		b=b/10;
	}
	d=sum*sum*sum;
	if(d==a)
	printf("dudeney number");
	else
	printf("not dudeney number");
}
