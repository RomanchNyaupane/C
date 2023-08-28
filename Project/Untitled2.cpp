#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void counting_part(char word_group_1[][30],int b);
main()
{
	int a,b,i;
	printf("Enter difficulty level\n1 for easy\n2 for medium\n3 for Hard\n");
	scanf("%d",&a);
	if(a<=0 || a>3)
	{
		for(i=1;i<=5;i++)
		{
		printf("Please select level between 1 to 3\n");
		scanf("%d",&a);
		if(a>0 && a<=3)
		break;
		}
	}
	if(a==1)
	{
		static char word_group_1[][30] = {"actual","call","cast","data","type","array","binary","decimal","display","shift","comment","laptop","desktop","windows","string","memory","scope","initial","return","double","history","function","loop","while","print","scanf"};
		srand(time(NULL));
		b=rand()%26;							//select random array index between 0 and 25 (there are 26 array elements). formula to generate random number between m and n is rand()%(n-m+1)+m
		counting_part(word_group_1,b);			//pass random word in this array to function
	}
	if(a==2)
	{
		static char word_group_2[][30] = {"associate","modulus","operand","brackets","operator","pointer","assign","position","statement","static","nested","prefix","default","register","suffix"};
		srand(time(NULL));
		b=rand()%15;
		counting_part(word_group_2,b);
	}
	if(a==3)
	{		 
		static char word_group_3[][30] = {"encrypt","piglatin","hyphen","haphazard","preprocesser","subscript","diagnostic","exponentiation","precedence","indentation","enumerate","argument","modularity","indirection","independence","fibonacci","armstrong","depreciation"};
		srand(time(NULL));
		b=rand()%18;
		counting_part(word_group_3,b);
	}
}
void counting_part(char word_recieved[][30],int b)
{
	printf("%s\n",word_recieved[b]);	
}
