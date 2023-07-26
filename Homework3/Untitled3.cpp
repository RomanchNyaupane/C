#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
char a[5];
int i,j[5];
for(i=0;i<4;i++)
a[i]=getche();
printf("\n");
for(i=0;i<4;i++){
j[i]=a[i]-48;
printf("%d",j[i]);	
}
}
