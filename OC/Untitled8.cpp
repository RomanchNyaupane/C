#include<stdio.h>

int main(){
    int a=0, b=1,d,i=2, sum=0 ;
    printf("Enter the number \n");
    scanf("%d", &d);
    printf("%d\n", a);
    printf("%d\n", b);
    do{
        
        sum=a+b;
        a=b;
        b=sum;
        
      
printf("%d\n", sum);
i++;
    }while(i<d);
   
    return 0;
}
