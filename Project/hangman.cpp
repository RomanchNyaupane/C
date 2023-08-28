#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int counting_part(char word_group_1[][30],int b);
int slen(char *str);
void hangman(int num);
main()

{
	int a,b,i;
	TOP:
	printf("Select category\n\n1.) for Tech\n\n2.) for Politics\n\n3.) for Foods\n\n4.) for Sports\n\n5.) for random\n\n");
	scanf("%d",&a);
	if(a==5)
	{
		srand(time(NULL));
		a=rand()%5;
		if(a==0)
		a=a+1;
	}
	if(a==1)
	{
		static char word_group_1[][30] = {"browser","bluetooth","chip","monitor","laptop","cellphone","binary","memory","display","processer","database","laptop","desktop","windows","signal","memory","upload","download","ethernet","internet","intranet","malware","modem","router","android","virus"};
		srand(time(NULL));
		b=rand()%26;							//select random array index between 0 and 25 (there are 26 array elements here). formula to generate random number between m and n is rand()%((n-m+1)+m)
		counting_part(word_group_1,b);			//pass random word in this array to function
	}
	if(a==2)
	{
		static char word_group_2[][30] = {"politics","parliament","government","dictator","democracy","majority","regime","court","bill","congress","maoist","constituent","election","register","referendum"};
		srand(time(NULL));
		b=rand()%15;
		counting_part(word_group_2,b);
	}
	if(a==3)
	{		 
		static char word_group_3[][30] = {"rice","meat","vegetable","pickle","burger","salad","momo","butter","nuts","banana","macaroni","pasta","noodles","milkshake","mushroom","papaya","mango","omelet","popcorn","pizza","sandwich","yoghurt","coconut","gundrukradhido","bouillabaisse"};
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
	if(a>=6 || a==0)
	{
	
		system("cls");
		printf("Invalid Input!\n");
		printf("Please Try Again!\n\n");
		
		goto TOP;
	}
	
}


int counting_part(char word_recieved[][30],int b)
{
	printf("%s\n",word_recieved[b]);
	printf("%d\n",b);
	char realword[20];
	strcpy(realword,word_recieved[b]);
	printf("%s",realword);
	printf("\nthe no. of letters is : %d\n",strlen(realword));
int cont=0;
printf("\nthe ascii value of each letters of word  is:\n" );
 while(cont<strlen(realword))
        {
           printf("%c = %d\n",realword[cont],realword[cont]);
        
            ++ cont ;
        }


/*	int slen(char *str)
{
   int letters=0;
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        letters++;
    }
 printf("the no. of letters is : %d\n",strlen(str));
 int count=0;
 char z[30];
printf("\nthe ascii value of each letters of word  is:\n" );
 while(count<strlen(str))
        {
           printf("  %c = %d\n",str[count],str[count]);
        
            ++ count ;
        }*/



char x[20],alpha;
char d='_';
int i,j,c,flag=0,n=0,ans=0,count=0;

c=strlen(realword);
printf("\n\nGuess the letters: \n");
for(j=0;j<c;j++)
	  {
	  printf("%c ",d);
	  x[j]=d;
	  }


while (count<6)//||(ans<c))
 {
 flag=0;
	   printf("\n\n\n\t Please Enter a Character: ");
		alpha=getchar();
		for(i=0;i<c;i++)
		{
			if (alpha==realword[i])
		    {
		   		x[i]=realword[i];
		   		flag=1;
				ans++; 
			}
		}
		printf("\n\n ");
		for(i=0;i<c;i++)
		printf("%c ",x[i]);
		

		if(flag==0)
			{
		count++;
		printf("\n\t\t%c is a Wrong Guess",alpha);
		n++;
		hangman(n);
		printf("\n\t\t (You Have %d More Guesses Left)",6-count);
			}

		else{
		printf("\n\t\t You Are Correct !!");
	   printf("\n\t\t( You Have %d More Words To Go)",c-ans);
	   		}
		if(ans==c) break;
 }
 if(ans==c){
 printf("\n\n\t You Won !!");}
 else {
 printf("\n\t\t  You Lost !!\n \t\t **SORRY  YOU ARE HANGED**");
 	printf("\n_____________..______");
	printf("\n| .__________))______|");
	printf("\n| |  / /     ||");
	printf("\n| | / /      ||");
	printf("\n| |/ /       ||_---_");
	printf("\n| | /        |/     \\ ");
	printf("\n| |/         ||() ()|");
	printf("\n| |           (\\ + /");
	printf("\n| |             HHH");
	printf("\n| |             \\_/");
	printf("\n| |           .-`--'.");
	printf("\n| |          /Y . . Y\\");
	printf("\n| |         // |   | \\\\");
	printf("\n| |        //  | . |  \\\\");
	printf("\n| |       //   |   |   \\\\");
	printf("\n| |      ')    ||.||    (`");
	printf("\n| |            || ||");
	printf("\n| |           / \\ / \\");
	printf("\n| |          / /   \\ \\");
	printf("\n| |         / /     \\ \\");
	printf("\n| |        / /       \\ \\");
	printf("\n| |       / /         \\ \\");
	printf("\n| |      (..)         (..)");
	printf("\n _______________________");
 printf("\n|_______________________|\n");
}
}
void hangman(int num) {    //defining hangman
 switch(num)
	{
		case 1:
		
			printf("\n_____________..______");
	printf("\n| .__________))______|");
	printf("\n| |  / /     ||");
	printf("\n| | / /      ||");
	printf("\n| |/ /       ||.-''.");
	printf("\n| | /        |/  _  \\ ");
	printf("\n| |/         ||  `/,|");
	printf("\n| |           (\\`_.'");
	printf("\n| |          .-`--'.");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n _______________________");
 printf("\n|_______________________|\n");
			break;
		case 2:
				printf("\n_____________..______");
	printf("\n| .__________))______|");
	printf("\n| |  / /     ||");
	printf("\n| | / /      ||");
	printf("\n| |/ /       ||.-''.");
	printf("\n| | /        |/  _  \\ ");
	printf("\n| |/         ||  `/,|");
	printf("\n| |           (\\`_.'");
	printf("\n| |          .-`--'.");
	printf("\n| |          Y . . Y");
	printf("\n| |           |   |");
	printf("\n| |           | . |");
	printf("\n| |           |   |");
	printf("\n| |           ||.||");
	printf("\n| |           || ||");
	printf("\n| |            \\ / ");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n _______________________");
 printf("\n|_______________________|\n");
			break;
		case 3:
			printf("\n_____________..______");
	printf("\n| .__________))______|");
	printf("\n| |  / /     ||");
	printf("\n| | / /      ||");
	printf("\n| |/ /       ||.-''.");
	printf("\n| | /        |/  _  \\ ");
	printf("\n| |/         ||  `/,|");
	printf("\n| |           (\\`_.'");
	printf("\n| |          .-`--'.");
	printf("\n| |         /Y . . Y");
	printf("\n| |        // |   |");
	printf("\n| |       //  | . |");
	printf("\n| |      //   |   |");
	printf("\n| |     ')    ||.||");
	printf("\n| |           || ||");
	printf("\n| |            \\ / ");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n _______________________");
 printf("\n|_______________________|\n");		
			break;
		case 4:
			printf("\n_____________..______");
	printf("\n| .__________))______|");
	printf("\n| |  / /     ||");
	printf("\n| | / /      ||");
	printf("\n| |/ /       ||.-''.");
	printf("\n| | /        |/  _  \\ ");
	printf("\n| |/         ||  `/,|");
	printf("\n| |           (\\`_.'");
	printf("\n| |          .-`--'.");
	printf("\n| |         /Y . . Y\\");
	printf("\n| |        // |   | \\\\");
	printf("\n| |       //  | . |  \\\\");
	printf("\n| |      //   |   |   \\\\");
	printf("\n| |     ')    ||.||    (`");
	printf("\n| |           || ||");
	printf("\n| |            \\ / ");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n| |");
	printf("\n _______________________");
 printf("\n|_______________________|\n");
			break;
		case 5:
			printf("\n_____________..______");
	printf("\n| .__________))______|");
	printf("\n| |  / /     ||");
	printf("\n| | / /      ||");
	printf("\n| |/ /       ||.-''.");
	printf("\n| | /        |/  _  \\ ");
	printf("\n| |/         ||  `/,|");
	printf("\n| |           (\\`_.'");
	printf("\n| |          .-`--'.");
	printf("\n| |         /Y . . Y\\");
	printf("\n| |        // |   | \\\\");
	printf("\n| |       //  | . |  \\\\");
	printf("\n| |      //   |   |   \\\\");
	printf("\n| |     ')    ||.||    (`");
	printf("\n| |           || ||");
	printf("\n| |          / \\ / ");
	printf("\n| |         / /");
	printf("\n| |        / /");
	printf("\n| |       / /");
	printf("\n| |      / /");
	printf("\n| |     (..)");
	printf("\n| |");
	printf("\n| |");
	printf("\n _______________________");
 printf("\n|_______________________|\n");
			break;
		case 6:
		printf("\n_____________..______");
	printf("\n| .__________))______|");
	printf("\n| |  / /     ||");
	printf("\n| | / /      ||");
	printf("\n| |/ /       ||.-''.");
	printf("\n| | /        |/  _  \\ ");
	printf("\n| |/         ||  `/,|");
	printf("\n| |           (\\`_.'");
	printf("\n| |          .-`--'.");
	printf("\n| |         /Y . . Y\\");
	printf("\n| |        // |   | \\\\");
	printf("\n| |       //  | . |  \\\\");
	printf("\n| |      //   |   |   \\\\");
	printf("\n| |     ')    ||.||    (`");
	printf("\n| |           || ||");
	printf("\n| |          / \\ / \\");
	printf("\n| |         / /   \\ \\");
	printf("\n| |        / /     \\ \\");
	printf("\n| |       / /       \\ \\");
	printf("\n| |      / /         \\ \\");
	printf("\n| |     (..)         (..)");
	printf("\n| |");
	printf("\n| |");
	printf("\n _______________________");
 printf("\n|_______________________|\n");
			break;
			
	}
}
