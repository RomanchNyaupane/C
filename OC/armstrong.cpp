#include<stdio.h>  
 int main()    
{    
	int a,b,c,sum=0;    
	printf("enter the number=");    
	scanf("%d",&a);    
	c=a;    
	while(a>0)    
	{    
		b=a%10;    
		sum=sum+(b*b*b);    
		a=a/10;    
	}    
	if(c==sum)    
	printf("armstrong  number ");    
	else    
	printf("not armstrong number");    
}
