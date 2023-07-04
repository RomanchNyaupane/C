#include<stdio.h>
main()
{
	int v,w,x,y,z,t;
	float a,b,c,d,e,o,p;
	printf("Enter your marks in five subjects\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	printf("Enter Full marks of each subjects\n");
	scanf("%d%d%d%d%d",&v,&w,&x,&y,&z);
	t=v+w+x+y+z;
	o=a+b+c+d+e;
	p=(o/t)*100;
	if(p>=80 && p<=100)
	{
	printf("A grade");
	}
	if(p>=75 && p<80)
	{
	printf("A- grade");
	}
	if(p>=70 && p<75)
	{
	printf("B+ grade");
	}
	if(p>= 65 && p<70)
	{
	printf("B grade");
	}
	if(p>=60 && p<64)
	{
	printf("B- grade");
	}
	if(p>=55 && p<60)
	{
	printf("C+ grade");
	}
	if(p>=50 && p<55)
	{
		printf("C grade");
	}
	if(p>=45 && p<50)
	{
		printf("C- grade");
	}
	if(p>=40 && p<45)
	{
		printf("D grade");
	}
	if(p<40)
	{
		printf("Fail");
	}
}
