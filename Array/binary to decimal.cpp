#include <stdio.h>  
#include<math.h>
int binaryTodecimal(int bin_num);  
int main()  
{ 
    int bin_num, dec_num;  
    printf (" Enter the binary number (0s and 1s) \n");  
    scanf ("%d", &bin_num);  
    dec_num = binaryTodecimal (bin_num); 
    printf ("decimal equivalent number is %d", dec_num);  
} 
int binaryTodecimal( int bin_num)  
{    
    int decimal_num = 0, temp = 0, rem;  
    while (bin_num != 0)  
    {  
        rem = bin_num % 10;  
        bin_num = bin_num / 10;  
        decimal_num = decimal_num + rem * pow( 2, temp);  
        temp++;  
    }  
    return decimal_num;  
} 
