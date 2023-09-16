#include<stdio.h>
main()
{
	struct book
	{
		char title[20];
		int book_id;
	};
	struct book bk1={"computer",11};
	struct book bk2=bk1;
	if(bk1.book_id==bk2.book_id)
	{
		printf("both are equal");
	}
	else
	{
		printf("why they are not equal?");
	}
}
