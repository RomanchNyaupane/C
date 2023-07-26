#include<stdio.h>
void func(int *);
main()
{
	static int arr[]={2,3,7,8,10,4};
	func(arr+2);
	int i;
	for(i=0;i<6;i++)
	printf("%d\n",arr[i]);
}
void func(int *p)
{
	double prod=1;
	for(int i=2;i<4;i++)
	prod *= *(p+i);{
	printf("Result = %lf\n",prod);
	}
	return;
}
