#include <stdio.h>
main()
{
    int a,b,i,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;++i)
    {
    if(a%i==0 && b%i==0)
    c=i;
    }
    printf("gcd is %d",c);
}
