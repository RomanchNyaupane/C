#include<stdio.h>
float asc(float []);
main()
{
	float a[10];int i;
	printf("enter 10 floating point numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",&a[i]);
	}
	asc(a);
	for(i=0;i<10;i++)
	{
		printf("%0.2f\n",asc(a));
	}
}
float asc(float a[])
{
	int i,j;
	float temp;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		if(a[i]>a[i+1])
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
}
