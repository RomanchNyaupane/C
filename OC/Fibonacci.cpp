#include<stdio.h>
main()
{
    int a=0, b=1,c,d=2,sum=0 ;
    printf("Enter the number \n");
    scanf("%d", &c);
    printf("%d\n", a);
    printf("%d\n", b);
    do{
        
        sum=a+b;
        a=b;
        b=sum;   
		printf("%d\n", sum);
		d++;
    	}while(d<c);
}
