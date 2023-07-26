#include<stdio.h>
#include<stdlib.h>
main()
{
	restart:
	float a,b,c=0,d=0,e,f;
	int i,j,n,x,y;
	printf("How many students?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
		printf("Enter the marks obtained by student %d in the following subjects:\n",i+1);
		printf("C programming: ");
		scanf("%f",&a);
		printf("Physics: ");
		scanf("%f",&b);
		printf("\n");
		e=a;
		f=b;
		}
		if(i>0)
		{
		printf("Enter the marks obtained by student %d in the following subjects:\n",i+1);
		printf("C programming: ");
		scanf("%f",&c);
		printf("Physics: ");
		scanf("%f",&d);
		printf("\n");
		if(c>=a)
		a=c;
		if(d>=b)
		b=d;
		}
		e=e+c;
		f=f+d;
	}
	repeat:
	for(i=0;i<5;i++)
	{
		for(j=0;j<50;j++){printf("*");}
		printf("\nSelect an operation\n");
		printf("0. Exit\n");
		printf("1. Print highest marks\n");
		printf("2. Print average marks\n");
		printf("3. Restart the program\n");
		for(j=0;j<50;j++){printf("*");};
		printf("\n");
		scanf("%d",&x);
		printf("\n");
		if(x>=4||x<0)
		{
			printf("Invalid choice!\n\n");
			continue;
		}
		else
		break;
	}
	if(x==0)
	{
		printf("Good bye!");
		return 0;
	}
	if(x==1)
	{
	printf("Highest mark in C programming is %0.2f\n",a);
	printf("Highest mark in Physics is %0.2f\n\n",b);
	goto repeat;	
	}
	if(x==2)
	{
	printf("Average mark in C programming is %0.2f\n",e/n);
	printf("Average marks in Physics is %0.2f\n\n",f/n);
	goto repeat;
	}
	if(x==3)
	{
	system("cls");
	goto restart;	
	}
}
