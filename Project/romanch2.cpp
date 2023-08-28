#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int counting_part(char word_group_1[][30],int b);
main()
{
	int a,b,i;
	printf("Select category\n1 for Tech\n2 for Politics\n3 for Foods\n4 for Sports\n5 for random\n");
	scanf("%d",&a);
	if(a==5)
	{
		srand(time(NULL));
		a=rand()%5;
		if(a==0)
		a=a+1;
	}
	if(a<=0 || a>4)
	{
		for(i=1;i<=5;i++)
		{
		printf("Please select level between 1 to 4\n");
		scanf("%d",&a);
		if(a>0 && a<=4)
		break;
		}
	}
	if(a==1)
	{
		static char word_group_1[][30] = {"browser","bluetooth","chip","monitor","laptop","cellphone","binary","memory","display","processer","database","laptop","desktop","windows","signal","memory","upload","download","ethernet","internet","intranet","malware","modem","router","android","virus"};
		srand(time(NULL));
		b=rand()%26;							//select random array index between 0 and 25 (there are 26 array elements here)
		counting_part(word_group_1,b);			//pass random word in this array to function
	}
	if(a==2)
	{
		static char word_group_2[][30] = {"politics","parliament","government","kpoli","democracy","majority","regime","court","bill","congress","maoist","constituent","election","register","referendum"};
		srand(time(NULL));
		b=rand()%15;
		counting_part(word_group_2,b);
	}
	if(a==3)
	{		 
		static char word_group_3[][30] = {"rice","meat","vegetable","pickle","burger","salad","momo","butter","peanuts","banana","macaroni","pasta","noodles","milkshake","mushroom","papaya","mango","omelet","popcorn","pizza","sandwich","yoghurt","coconut","gundruk","bouillabaisse"};
		srand(time(NULL));
		b=rand()%25;
		counting_part(word_group_3,b);
	}
	if(a==4)
	{
		static char word_group_2[][30] = {"running","referee","volleyball","bat","football","basketball","cricket","athlete","defense","intersection","offside","penalty","jersey","playoff","wrestling","olympics","hockey","baseball","kabaddi","tennis","badminton","archery","gymnnastics"};
		srand(time(NULL));
		b=rand()%23;
		counting_part(word_group_2,b);
	}
}
int counting_part(char word_recieved[][30],int b)
{
	printf("%s\n",word_recieved[b]);
	printf("%d\n",b);
}
