#include <stdio.h>
#include <stdlib.h>
main()
{
    int temp,i=0,j=0,m=0,*ptr;
    const int n = 13;
    int A[13]={ 4 , 6,  2,  4,  2,  6,  4,  2,  6,  4,  4  ,2  ,4};

    ptr =(int*) malloc(sizeof(int)*n);
    ptr = A;
    //sorting process
    for(i=0;i<n-1;i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if ((*(ptr+j))> (*(ptr+1+j)))
            {
                temp = (*(ptr+j));
                (*(ptr+j)) = (*(ptr+j+1));
                (*(ptr+j+1))=temp;
            }
        }
    }
    //after sorting display
    printf("Sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d", *(ptr+i));
    }
}
