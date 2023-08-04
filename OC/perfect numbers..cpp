#include<stdio.h>
int main()
{
	int a;
	int b=1;
	int sum=0;
	printf("enter a number: ");
	scanf("%d",&a);
	while(b<a)
  	{
      if(a%b==0)
        sum=sum+b;
		b++;
  	}
	if(sum==a)
    	printf("perfect number");
	else
    	printf("not perfect number");
}
