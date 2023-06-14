#include<stdio.h>
main()
{
	float a,b,c,d,e,f;
	printf("enter your marks for Physics");
	scanf("%f",&b);
	printf("enter your marks for Chemistry");
	scanf("%f",&c);
	printf("enter your marks for Mathematics");
	scanf("%f",&d);
	printf("enter your marks for ENGG");
	scanf("%f",&e);
	printf("enter your marks for Drawing");
	scanf("%f",&f);
	a=((b+c+d+e+f)/500)*100;
					printf("Physics=%f\n",b);
					printf("Chemistry=%f\n",c);
					printf("Maths=%f\n",d);
					printf("Engg=%f\n",e);
					printf("Drawing=%f\n",f);
    if (a>=90&&a<=100)
	printf("A grade");
else	if (a>=85&&a<90)
	printf("A- grade");
else	if (a>=80&&a<85)
	printf("B+ grade");
else	if (a>=75&&a<80)
	printf("B grade");
else	if (a>=70&&a<75)
	printf("B- grade");
else	if (a>=65&&a<70)
	printf("C+ grade");
else	if (a>=60&&a<65)
	printf("C grade");
else	if (a>=55&&a<60)
	printf("C- grade");
else	if (a>=50&&a<55)
	printf("D grade");
else	if(a<50)
	printf("you have failed");

}
