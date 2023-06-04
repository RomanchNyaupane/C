#include <stdio.h>

int main(){
    //declations
    // const red=2,white=4,blue=6;

int temp,i=0,j=0;
const int a = 13;
int x[13] ={4,6,2,4,2,6,4,2,6,4,4,2,4};

   //sorting process
for( i=0; i<(a-1); i++){
for( j=0; j<(a-1-i);j++){
if ( x[j] > x[j+1]){
temp = x[j];
x[j] = x[j+1];
x[j+1]= temp;
}
}
}
    //after sorting display 
printf("\nSorted array is : ");
for(i=0;i<a;i++){
printf("%d ",x[i]);
}
return 0;
}
