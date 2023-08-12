#include<stdio.h>
struct data{
	int rollno;
	char name[20];
}d[100],*p;
main()
{
	
	int i;
	struct data d[3]={{10,"abcd"},{11,"efgh"},{12,"ijkl"}};
	p=d;
	for(i=0;i<3;i++)
	{
		printf("%d %s\n",p->rollno,p->name);
		p++;	
	}	
}
