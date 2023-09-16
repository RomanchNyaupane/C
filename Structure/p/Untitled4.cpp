#include<stdio.h>
main()
{
	struct stud{
		int roll;
		char name[];
	}s1;
	struct stud s2;
	printf("%d",s1.roll);
	printf("%d",s1.name);
}
