#include<stdio.h>
int sum(int a,int b)
{

return a+b;
}
int product(int a, int b){

return a*b;
}
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d",&a,&b);
	c= sum(a,b);
	d= product(a,b);
	printf("sum\n %d",c);
	printf("\nproduct\n %d",d);
	return 0;
	
}
