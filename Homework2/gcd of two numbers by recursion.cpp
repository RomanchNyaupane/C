#include <stdio.h>
int hcf(int a, int b);
int main() {
    int a, b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("GCD is %d",hcf(a, b));
}

int hcf(int a,int b)
{
    if (b!=0)
        return hcf(b,a%b);
    else
        return a;
}
