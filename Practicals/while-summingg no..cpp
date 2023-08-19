#include<stdio.h>
main()
{
int a,b,c;
printf("How many number you want to enter:");
scanf("%d",&b);
printf("\n");
a=1;
while(a<=b){
printf("\n Enter Number:");
scanf("%d",&c);
if(c%3==0){
printf("%d is divisible by 3",c);
}
else{
printf("%d is not divisible by 3",c);
}
printf("\n");
++a;
}
}
