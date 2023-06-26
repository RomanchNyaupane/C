#include<stdio.h>
void sum(int p,int q)
{
	int c=p+q;
	printf("sum is %d",c);
}

main()
{
int a,b;
printf("enter");
scanf("%d%d",&a,&b);
sum(a, b);

}
