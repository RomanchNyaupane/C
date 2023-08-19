#include<stdio.h>
main()
{
	float a,b,c,d,e,f;
	printf("Enter your marks for Physics");
	scanf("%f",&b);
	printf("Enter your marks for Chemistry");
	scanf("%f",&c);
	printf("Enter your marks for Mathematics");
	scanf("%f",&d);
	printf("Enter your marks for ENGG");
	scanf("%f",&e);
	printf("Enter your marks for Drawing");
	scanf("%f",&f);
	a=((b+c+d+e+f)/500)*100;
					printf("Marks                  Grade\n\n");
					
					printf("Physics=%0.1f\t\t",b);{
					        if (b>=90&&b<=100)
								printf("A grade\n");
							else	if (b>=85&&b<90)
								printf("A- grade\n");
							else	if (b>=80&&b<85)
								printf("B+ grade\n");
							else	if (b>=75&&b<80)
								printf("B grade\n");
							else	if (b>=70&&b<75)
								printf("B- grade\n");
							else	if (b>=65&&b<70)
								printf("C+ grade\n");
							else	if (b>=60&&b<65)
								printf("C grade\n");
							else	if (b>=55&&b<60)
								printf("C- grade\n");
							else	if (b>=50&&b<55)
								printf("D grade\n");
							else
							printf("Fail\n");
							}
					printf("Chemistry=%0.1f\t\t",c);{
					        if (c>=90&&c<=100)
								printf("A grade\n");
							else	if (c>=85&&c<90)
								printf("A- grade\n");
							else	if (c>=80&&c<85)
								printf("B+ grade\n");
							else	if (c>=75&&c<80)
								printf("B grade\n");
							else	if (c>=70&&c<75)
								printf("B- grade\n");
							else	if (c>=65&&c<70)
								printf("C+ grade\n");
							else	if (c>=60&&c<65)
								printf("C grade\n");
							else	if (c>=55&&c<60)
								printf("C- grade\n");
							else	if (c>=50&&c<55)
								printf("D grade\n");
							else
							printf("Fail\n");
							}	
					printf("Mathematics=%0.1f\t",d);{
					        if (d>=90&&d<=100)
								printf("A grade\n");
							else	if (d>=85&&d<90)
								printf("A- grade\n");
							else	if (d>=80&&d<85)
								printf("B+ grade\n");
							else	if (d>=75&&d<80)
								printf("B grade\n");
							else	if (d>=70&&d<75)
								printf("B- grade\n");
							else	if (d>=65&&d<70)
								printf("C+ grade\n");
							else	if (d>=60&&d<65)
								printf("C grade\n");
							else	if (d>=55&&d<60)
								printf("C- grade\n");
							else	if (d>=50&&d<55)
								printf("D grade\n");
							else
							printf("Fail\n");
							}
					printf("Engg=%0.1f\t\t",e);{
					        if (e>=90&&e<=100)
								printf("A grade\n");
							else	if (e>=85&&e<90)
								printf("A- grade\n");
							else	if (e>=80&&e<85)
								printf("B+ grade\n");
							else	if (e>=75&&e<80)
								printf("B grade\n");
							else	if (e>=70&&e<75)
								printf("B- grade\n");
							else	if (e>=65&&e<70)
								printf("C+ grade\n");
							else	if (e>=60&&e<65)
								printf("C grade\n");
							else	if (e>=55&&e<60)
								printf("C- grade\n");
							else	if (e>=50&&e<55)
								printf("D grade\n");
							else
							printf("Fail\n");
							}
								
					printf("Drawing=%0.1f\t\t",f);{
					        if (f>=90&&f<=100)
								printf("A grade\n");
							else	if (f>=85&&f<90)
								printf("A- grade\n");
							else	if (f>=80&&f<85)
								printf("B+ grade\n");
							else	if (f>=75&&f<80)
								printf("B grade\n");
							else	if (f>=70&&f<75)
								printf("B- grade\n");
							else	if (f>=65&&f<70)
								printf("C+ grade\n");
							else	if (f>=60&&f<65)
								printf("C grade\n");
							else	if (f>=55&&f<60)
								printf("C- grade\n");
							else	if (f>=50&&f<55)
								printf("D grade\n");
							else
							printf("Fail\n");
							}
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
	printf("Fail\n");
}
