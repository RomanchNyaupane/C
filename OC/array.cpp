#include<stdio.h>
int main()
{
int n,a[100];
printf("How many numbers");
scanf("%d",&n);
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
a[i]=a[i]+5;
}
for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
}

