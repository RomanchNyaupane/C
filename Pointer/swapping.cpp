#include<stdio.h> 
main() 
{ 
int x[5]={1,2,3,4,5},i; 
 for(i=0;i<5;++i)
{ 
printf("\ni=%d x[%d]=%d *(x+%d)=%d",i,i,x[i],i,*(x+i)); 
printf(" &x[%d]=%x \t x+%d=%x",i,&x[i],i,(x+i));
}
}
