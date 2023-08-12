#include<stdio.h>

int main(){
    int a[5]={1,2,3,4,5};
    
    int *p1 =&a[0];
    int *p2 =a;
    printf("%u\n",p1);
    printf("%u\n",p2);
  if(p1==p2){
  	printf("equal");
  	
  }
  else
  {
  	printf("not equal");
  }
 
}
