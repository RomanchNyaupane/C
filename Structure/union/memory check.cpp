#include<stdio.h>
union student{
	int rollno;
	int marks;
};
main()
{
	union student data={9};
	printf("%d\n",data.marks);
	printf("%d",data.rollno);
}
