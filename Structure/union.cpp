#include<stdio.h>
#include<string.h>
union data{
	int i;
	float f;
	char name[20];
};
main()
{
	union data data;
	data.i=10;
	printf("data.i = %d\n",data.i);
	data.f=220.5;
	printf("data.f = %0.1f\n",data.f);
	strcpy(data.name,"C programming");
	printf("data.name = %s \n",data.name);
}
