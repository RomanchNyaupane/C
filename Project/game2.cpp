#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <conio.h>

#define C 262
#define D 294
#define E 330
#define F 349
#define G 392
#define A 440
#define B 494
#define C_Sharp 523
#define duration 250

//Function Initialization

void first_header_main();
void first_header_dropdown();
void first_header_wrapup();
int user_choice();
int game_choice();
void loading_box(int usr_choice);
void information();
void creadit();
int Random_Generator(int gam_choice);
int Counter_Function(char word_received[][30],int word_position);
void status_start();
void status_1();
void status_2();
void status_3();
void status_4();
void status_5();
void status_final_face();
void staturs_end();
void gaming_screen();
void gaming_screen_title();


int sleep_timer_ms=50,i,j,long_pause,word_compare_result,new_counter;
int usr_choice,gam_choice,exit_condition,word_position;
int loading_rate,game_choice_status,extracted_word_length,error_counter,character_boolean,guessed_character,gaming_boolean;
char finish_reading[100], extracted_word[20];
char dash_maker_outer[20],user_input_word[20];
char dash='_';
char dummy_user_input_character,playing_choice;

void first_header_main(){

system ("cls");
printf("     .----------------.  .----------------.  .-----------------. .----------------.  .----------------.  .----------------.  .-----------------.\n");
printf("    | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
printf("    | |  ____  ____  | || |      __      | || | ____  _____  | || |    ______    | || | ____    ____ | || |      __      | || | ____  _____  | |\n");
printf("    | | |_   ||   _| | || |     /  \\     | || ||_   \\|_   _| | || |  .' ___  |   | || ||_   \\  /   _|| || |     /  \\     | || ||_   \\|_   _| | |\n");
printf("    | |   | |__| |   | || |    / /\\ \\    | || |  |   \\ | |   | || | / .'   \\_|   | || |  |   \\/   |  | || |    / /\\ \\    | || |  |   \\ | |   | |\n");
printf("    | |   |  __  |   | || |   / ____ \\   | || |  | |\\ \\| |   | || | | |    ____  | || |  | |\\  /| |  | || |   / ____ \\   | || |  | |\\ \\| |   | |\n");
printf("    | |  _| |  | |_  | || | _/ /    \\ \\_ | || | _| |_\\   |_  | || | \\ `.___]  _| | || | _| |_\\/_| |_ | || | _/ /    \\ \\_ | || | _| |_\\   |_  | |\n");
printf("    | | |____||____| | || ||____|  |____|| || ||_____|\\____| | || |  `._____.'   | || ||_____||_____|| || ||____|  |____|| || ||_____|\\____| | |\n");
printf("    | |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n");
printf("    | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
printf("    '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  \n");

}

void first_header_dropdown(){
system ("cls");
system("color 0A");
Beep(C,duration);
printf("     .----------------.  .----------------.  .-----------------. .----------------.  .----------------.  .----------------.  .-----------------.\n");
printf("    | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
Sleep(sleep_timer_ms);
Beep(D,duration);
printf("    | |  ____  ____  | || |      __      | || | ____  _____  | || |    ______    | || | ____    ____ | || |      __      | || | ____  _____  | |\n");
Sleep(sleep_timer_ms);
Beep(E,duration);
printf("    | | |_   ||   _| | || |     /  \\     | || ||_   \\|_   _| | || |  .' ___  |   | || ||_   \\  /   _|| || |     /  \\     | || ||_   \\|_   _| | |\n");
Sleep(sleep_timer_ms);
Beep(F,duration);
printf("    | |   | |__| |   | || |    / /\\ \\    | || |  |   \\ | |   | || | / .'   \\_|   | || |  |   \\/   |  | || |    / /\\ \\    | || |  |   \\ | |   | |\n");
Sleep(sleep_timer_ms);
Beep(G,duration);
printf("    | |   |  __  |   | || |   / ____ \\   | || |  | |\\ \\| |   | || | | |    ____  | || |  | |\\  /| |  | || |   / ____ \\   | || |  | |\\ \\| |   | |\n");
Sleep(sleep_timer_ms);
Beep(A,duration);
printf("    | |  _| |  | |_  | || | _/ /    \\ \\_ | || | _| |_\\   |_  | || | \\ `.___]  _| | || | _| |_\\/_| |_ | || | _/ /    \\ \\_ | || | _| |_\\   |_  | |\n");
Sleep(sleep_timer_ms);
Beep(B,duration);
printf("    | | |____||____| | || ||____|  |____|| || ||_____|\\____| | || |  `._____.'   | || ||_____||_____|| || ||____|  |____|| || ||_____|\\____| | |\n");
Sleep(sleep_timer_ms);
Beep(C_Sharp,duration);
printf("    | |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n");
Sleep(sleep_timer_ms);
printf("    | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
Sleep(sleep_timer_ms);
printf("    '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  \n");
Sleep(sleep_timer_ms+200);
}


void first_header_wrapup(){
system ("cls");
system("color 01");
printf("     .----------------.  .----------------.  .-----------------. .----------------.  .----------------.  .----------------.  .-----------------.\n");
printf("    | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
Sleep(sleep_timer_ms);
Beep(C_Sharp,duration);
printf("    | |  ____  ____  | || |      __      | || | ____  _____  | || |    ______    | || | ____    ____ | || |      __      | || | ____  _____  | |\n");
Sleep(sleep_timer_ms);
Beep(B,duration);
printf("    | | |_   ||   _| | || |     /  \\     | || ||_   \\|_   _| | || |  .' ___  |   | || ||_   \\  /   _|| || |     /  \\     | || ||_   \\|_   _| | |\n");
Sleep(sleep_timer_ms);
Beep(A,duration);
printf("    | |   | |__| |   | || |    / /\\ \\    | || |  |   \\ | |   | || | / .'   \\_|   | || |  |   \\/   |  | || |    / /\\ \\    | || |  |   \\ | |   | |\n");
Sleep(sleep_timer_ms);
Beep(G,duration);
printf("    | |   |  __  |   | || |   / ____ \\   | || |  | |\\ \\| |   | || | | |    ____  | || |  | |\\  /| |  | || |   / ____ \\   | || |  | |\\ \\| |   | |\n");
Sleep(sleep_timer_ms);
Beep(F,duration);
printf("    | |  _| |  | |_  | || | _/ /    \\ \\_ | || | _| |_\\   |_  | || | \\ `.___]  _| | || | _| |_\\/_| |_ | || | _/ /    \\ \\_ | || | _| |_\\   |_  | |\n");
Sleep(sleep_timer_ms);
Beep(E,duration);
printf("    | | |____||____| | || ||____|  |____|| || ||_____|\\____| | || |  `._____.'   | || ||_____||_____|| || ||____|  |____|| || ||_____|\\____| | |\n");
Sleep(sleep_timer_ms);
Beep(D,duration);
printf("    | |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n");
Sleep(sleep_timer_ms);
printf("    | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
Sleep(sleep_timer_ms);
printf("    '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  \n");
Beep(C,duration);
}

void information(){
system ("cls");
system("color 80");
first_header_main();
printf("\n");

while(1)
{
printf("          __          ___  __      __         __       \n");
printf("    |__| /  \\ |  |     |  /  \\    |__) |     /__\\  \\ / \n");
printf("    |  | \\__/ |/\\|     |  \\__/    |    |___ /    \\  |  \n");
printf("    _________________________________________________\n");
printf("    _________________________________________________\n\n");
printf("\n    History of Hangman : \n\n");
printf("   %c  ",127);printf("In the \"Rite of Words and Life\" a criminal to be hanged was strung up over a 5 legged stand,\n"); 
printf("      and a board with a series of short ropes representing a word was displayed. The Executioner would pick the word,\n");
printf("      and would use charcoal to mark correctly guessed letters on the dashes of the board, and incorrect letters to the side.\n"); 
printf("      At every incorrect guess the executioner would use a sledge hammer or axe to knock away a single leg of the stand.\n"); 
printf("      5 wrong guesses, and the criminal was hanged.If the entire word was filled in correctly or guessed,\n"); 
printf("      the condemned would be set free from that sentence and not tried again on that crime.\n");

Sleep(1200);
printf("\n\n    Methodology : \n\n");
printf("   %c  ",127);printf("Select the a field from the list given to the user. (Sports, Food, Technology, Politics)\n");
printf("   %c  ",127);printf("You are given 6 tries to guess the word.\n");
printf("   %c  ",127);printf("With each correct answer you fill the blank and reveal the word one by one.\n");
printf("   %c  ",127);printf("With each wrong answer you add a body part to the Hangman.\n");

printf("\n\n\n\n");


Sleep(5000);

printf("     Press any letter to continue : " );scanf("%s",finish_reading);
break;


}  


}

void credit(){
system ("cls");
first_header_main();
printf("\n\n");
system("color 0A");
while(1){
printf("     __   __   ___  __    ___ \n");
printf("    /    |__) |__  |  \\ |  | \n"); 
printf("    \\__  |  \\ |___ |__/ |  |\n");
printf("   ____________________________\n");
printf("   ____________________________\n\n");
printf("\n\n\n   Team Members : ");
printf("\n    ______________________________\t\t\t\t\tSubject : COMP 102");
printf("\n   |                              |\t\t\t\t\tDepartment : Electrical and Electronics (Specialization in Power & Control)");
printf("\n   | Anupam Koirala (42)          |\t\t\t\t\t             Kathmandu University School of Engineering");
printf("\n   |                              |");
printf("\n   | Saurav Raj Paudel (49)       |");
printf("\n   |                              |");
printf("\n   | Sreejan Dahal (11)           |");
printf("\n   |                              |");
printf("\n   | Rupesh Neupane (47)          |\t\t\t\t\tLecturer :   Praynita Karki");
printf("\n   |                              |\t\t\t\t\tDepartment : Computer Science & Computer Engineering");
printf("\n   | Romanch Nyaupane (48)         |\t\t\t\t\t             Kathmandu University School of Engineering");
printf("\n   |______________________________|\n\n");
Beep(523, 200);
    Beep(523, 200);
    Beep(578, 400);
    Beep(523, 400);
    Beep(698, 400);
    Beep(659, 800);

    Beep(523, 200);
    Beep(523, 200);
    Beep(578, 400);
    Beep(523, 400);
    Beep(784, 400);
    Beep(698, 800);

    Beep(523, 200);
    Beep(523, 200);
    Beep(1046, 400);
    Beep(880, 400);
    Beep(698, 400);

    Beep(659, 400);
    Beep(578, 400);

    Beep(932, 200);
    Beep(932, 200);
    Beep(880, 400);
    Beep(698, 400);
    Beep(784, 400);
    Beep(698, 800);
Sleep(5000);
printf("   Press any letter to continue : ");scanf("%s",finish_reading);
break;


}
}

int user_choice(){
system("color 03");
printf("     __        ___   __    __   ___     __   ___       ___  __  ___      __                __   __  ___    __               \n");
printf("    |__) |    |__   /__\\  /__  |__     /__  |__  |    |__  /     |      /__\\  |\\ | \\ /    /  \\ |__)  |  | /  \\ |\\ | \n");
printf("    |    |___ |___ /    \\  __/ |___     __/ |___ |___ |___ \\__   |     /    \\ | \\|  |     \\__/ |     |  | \\__/ | \\| \n");
printf("    ___________________________________________________________________________________________________________________\n");
printf("    ___________________________________________________________________________________________________________________\n");

printf("\n");
printf("     ___________________________________ \n");
printf("    |                                   |\t\t\t\t\t\t\t\t   ___________ \n");
printf("    |  1.     P L A Y  G A M E          |\t\t\t\t\t\t\t\t     |/      | \n");
printf("    |                                   |\t\t\t\t\t\t\t\t     |      (_)    \n");
printf("    |  2.     H E L P                   |\t\t\t\t\t\t\t\t     |      \\|/   \n");
printf("    |                                   |\t\t\t\t\t\t\t\t     |       | \n");
printf("    |  3.     C R E D I T               |\t\t\t\t\t\t\t\t     |      / \\    \n");
printf("    |                                   |\t\t\t\t\t\t\t\t     |\n");
printf("    |  4.     E X I T                   |\t\t\t\t\t\t\t\t  ___|____  \n");
printf("    |___________________________________|\t\t\t\t\t\t\t\t  Can you save me Please!!!\n");
printf("    STRICTLY!!! Type only number : "); scanf("%d",&usr_choice);
return usr_choice;
  
}

int game_choice(){
system("color 0E");
printf("     __        ___   __    __   ___     __   ___       ___  __  ___    ___       ___     ___    ___       __  \n");
printf("    |__) |    |__   /__\\  /__  |__     /__  |__  |    |__  /     |      |  |__| |__     |__  | |__  |    |  \\ \n");
printf("    |    |___ |___ /    \\  __/ |___     __/ |___ |___ |___ \\__   |      |  |  | |___    |    | |___ |___ |__/ \n");
printf("    ____________________________________________________________________________________________________________\n");
printf("    ____________________________________________________________________________________________________________\n");

printf("\n");


printf("     ___________________________________ \n");
printf("    |                                   |\t\t\t\t\t\t   ___________ \n");
printf("    |  1.     S P O R T S               |\t\t\t\t\t\t     |/      | \n");
printf("    |                                   |\t\t\t\t\t\t     |      (_)    \n");
printf("    |  2.     P O L I T I C S           |\t\t\t\t\t\t     |      \\|/   \n");
printf("    |                                   |\t\t\t\t\t\t     |       | \n");
printf("    |  3.     T E C H N O L O G Y       |\t\t\t\t\t\t     |      / \\    \n");
printf("    |                                   |\t\t\t\t\t\t     |\n");
printf("    |  4.     F O O D                   |\t\t\t\t\t\t  ___|____  \n");
printf("    |                                   |\t\t\t\t\t\t  Can you save me Please!!!\n");
printf("    |  5.     R A N D O M               |\n");
printf("    |                                   |\n");
printf("    |  6.     M A I N   M E N U         |\n");
printf("    |___________________________________|\n\n");
printf("    STRICTLY!!! Type only number : "); scanf("%d",&gam_choice);
return gam_choice;
}

void loading_box(int usr_choice){
    char a = 177, b = 219;
    if ((usr_choice == 1) || (usr_choice ==2) || (usr_choice == 3) || (usr_choice == 4)){
        if(usr_choice == 1){  
            printf("\n\t\t\t\t\t\tCompiling the Game...\n\n");
        }
        else if(usr_choice == 2){
            printf("\n\t\t\t\t\t\tLoading Instructions...\n\n");
        }
        else if(usr_choice == 3) {
            printf("\n\t\t\t\t\t\tSearching Credits...\n\n");
        }
        else{
            printf("\n\t\t\t\t\t\tExiting Game...\n\n");
        }
    }

     if ((usr_choice == 1) || (usr_choice ==2) || (usr_choice == 3)){
        loading_rate=200;
      }
     else{
        loading_rate=100;
      }    
        printf("\t\t\t\t\t\t");
  int i;
    for (i = 0; i < 26; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t\t\t\t");
  
    for (i = 0; i < 26; i++) {
        printf("%c", b);
      
        Sleep(loading_rate);
    }
}

int Random_Generator(int gam_choice){
    Re_Allot:
	if(gam_choice == 1)
	{
		static char word_group_1[][30] = {"browser","bluetooth","chip","monitor","laptop","cellphone","binary","memory","display","processer","database","laptop","desktop","window","signal","upload","download","ethernet","internet","malware","modem","router","android","virus"};
		srand(time(NULL));
		word_position=rand()%26;							//select random array index between 0 and 25 (there are 26 array elements here). formula to generate random number between m and n is rand()%((n-m+1)+m)
		Counter_Function(word_group_1,word_position);			//pass random word in this array to function
        game_choice_status=3;
    }
	else if(gam_choice == 2)
	{
		static char word_group_2[][30] = {"politics","parliament","government","president","democracy","majority","regime","court","bill","congress","maoist","constituent","election","register","referendum","revolution"};
		srand(time(NULL));
		word_position=rand()%15;
		Counter_Function(word_group_2,word_position);
        game_choice_status=3;
    }
	else if(gam_choice == 3)
	{		 
		static char word_group_3[][30] = {"rice","meat","vegetable","pickle","burger","salad","momo","butter","fish","banana","macaroni","pasta","noodles","milkshake","mushroom","papaya","mango","omelet","popcorn","pizza","sandwich","yoghurt","coconut","gundrukh","garlic"};
		srand(time(NULL));
		word_position=rand()%25;
		Counter_Function(word_group_3,word_position);
        game_choice_status=3;
    }
	else if(gam_choice == 4)
	{
		static char word_group_2[][30] = {"running","referee","volleyball","bat","football","basketball","cricket","athlete","defense","intersection","offside","penalty","jersey","playoff","wrestling","olympics","hockey","baseball","kabaddi","tennis","badminton","archery","gymnnastics"};
		srand(time(NULL));
		word_position=rand()%23;
		Counter_Function(word_group_2,word_position);
        game_choice_status=3;
        }
    else if(gam_choice == 5)
	{
		srand(time(NULL));
		gam_choice=rand()%5;
		if(gam_choice==0) gam_choice = gam_choice+1;
        goto Re_Allot;
    }
    else if(gam_choice == 6){
        game_choice_status=2;
    }
    
   else {
            game_choice_status=1;
           }
    return game_choice_status;
    }


int Counter_Function(char word_received[][30],int word_position)
{
system ("cls");
  strcpy(extracted_word,word_received[word_position]);
  extracted_word_length=strlen(extracted_word);
  
}
void status_start(){
      printf("  _______\n");
      printf("  |/\n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("__|_________\n\n");
      Sleep(1000);
}

void status_1(){
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("__|__________\n\n");
}

void status_2(){
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |    |\n");
      printf("  |    |\n");
      printf("  |\n");
      printf("__|_________\n\n");
}

void status_3(){
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |    |/\n");
      printf("  |    | \n");
      printf("  |\n");
      printf("__|_________\n\n");
}

void status_4(){
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |   \\|/\n");
      printf("  |    | \n");
      printf("  |   \n");
      printf("__|_________\n\n");
}

void status_5(){
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |   \\|/\n");
      printf("  |    | \n");
      printf("  |   / \n");
      printf("__|_________\n\n");
}

void status_final_face(){
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |   \\|/\n");
      printf("  |    | \n");
      printf("  |   / \\\n");
      printf("__|_________\n\n");
}
void status_end(){
      system("color 0C");
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    X \n");
      printf("  |   \\|/\n");
      printf("  |    | \n");
      printf("  |   / \\\n");
      printf("__|_________\n\n");
}

void gaming_screen_title(){
system ("cls");
system("color 03");
first_header_main();
printf("\n\n");
printf("    ___  _    ____ ____ ____ ____    ____ ____ _  _ ____    _  _ ____      \n");
printf("    |__] |    |___ |__| [__  |___    [__  |__| |  | |___    |\\/| |___     | | |\n");
printf("    |    |___ |___ |  | ___] |___    ___] |  |  \\/  |___    |  | |___     . . . \n");
printf("\n\n\n");
printf("The Number of letters remining are represented by ___\n");
printf("Guesses Remaining = %d\n",6-error_counter);
for(new_counter=0;new_counter<extracted_word_length;new_counter++){
    printf("%c ",dash_maker_outer[new_counter]);
}
printf("\n");
}

void gaming_screen(){

gaming_screen_title();


for (i=0;i<extracted_word_length;i++){
    dash_maker_outer[i]=dash;
}
while (error_counter<6){
                character_boolean=0;
                if (error_counter==0){
                     status_start();
                }
                else{
                    gaming_screen_title();
                    if (error_counter==1){
                            status_1();
                        }
                        else if (error_counter==2){
                            status_2();
                        }
                        else if (error_counter==3){
                            status_3();   
                        }
                        else if (error_counter==4){
                            status_4();
                        }
                        else if (error_counter==5){
                            status_5();
                        }      
                }
                printf("\nPlease Enter a Character\t");
                dummy_user_input_character=getche();
                printf("\n");               
                for (i=0;i<extracted_word_length;i++){
                    if(dummy_user_input_character==extracted_word[i]){
                        dash_maker_outer[i]=extracted_word[i];
                        user_input_word[i]=extracted_word[i];
                        character_boolean=1;
                        guessed_character++;
                        
                    }
                }

                    if(character_boolean==1){
                        
                        
                    /*
                  
                    */
                      //Answer Right
                      
                      gaming_boolean=1;
                      //printf("You are right!\n");
                      Beep(C,800); 
                      gaming_screen_title();
                      if (error_counter==1){
                            status_1();
                        }
                        else if (error_counter==2){
                            status_2();
                        }
                        else if (error_counter==3){
                            status_3();   
                        }
                        else if (error_counter==4){
                            status_4();
                        }
                        else if (error_counter==5){
                            status_5();
                        }             
                         printf("\n");
                         for(i=0;i<extracted_word_length;i++){
                        
                        }
                        //Dash assigning
                    }
                    else{
                        //Answer Wrong
                        gaming_screen_title();
                      
                      for(i=0;i<extracted_word_length;i++){
                      
                    }
                        error_counter++;
                        //printf("You are wrong!\n");
                        //printf("Tries Remaining %d\n",6-error_counter);
                        if (error_counter==1){
                            status_1();
                            Beep (3200,400);Beep (3200,400);
                        }
                        else if (error_counter==2){
                            status_2();
                            Beep (3200,400);Beep (3200,400);
                        }
                        else if (error_counter==3){
                            status_3();   
                            Beep (3200,400);Beep (3200,400);
                        }
                        else if (error_counter==4){
                            status_4();
                            Beep (3200,400);Beep (3200,400);
                        }
                        else if (error_counter==5){
                            status_5();
                            Beep (3200,400);Beep (3200,400);
                        }
                        else if (error_counter==6){
                            status_final_face();
                            Beep (3200,400);Beep (3200,400);
                            Sleep(1000);
                            gaming_screen_title();
                            status_end();
                            printf("\nThe Correct Word was %s",extracted_word);
                            Sleep(3000);
                           // printf("\ngame finish ");
                           // printf("\nThe right word was  %s ",extracted_word);
                        }
                        }
                   
               word_compare_result=strcmp(user_input_word,extracted_word);
               if(word_compare_result==0){
                   break;
               }

            }

/*for(i=0;i<extracted_word_length;i++){
    printf("%c ",dash_maker_outer[i]);
}*/



}

main(){
 
 //Display the Welcome Screen 

 first_header_dropdown();
 first_header_wrapup();
 Welcome:
 exit_condition=0;
 first_header_main();
 printf("\n\n");
 user_choice();
 

//Take User Input
 Exit:
 if (exit_condition == 0){
    if (usr_choice == 1){
        loading_box(usr_choice);
        Game_Choice:
        first_header_main();
        printf("\n\n");
        game_choice();
        Random_Generator(gam_choice);
            /* game_choice_status = 1 means that gam_choice > 6
               game_choice_status = 2 means that gam_choice = 6 and user wants to return to usr_choice()
               game_choice_statue = 3 means that 0 < gam_choice < 7 and it is valid
            */
            if (game_choice_status == 1){
                system("color 0C");
                printf("\n    Please, select number from the list !!!\n");
                Beep (3200,400);
                Beep (3200,400);
                Sleep(1500); 
                goto Game_Choice;
            }
            else if (game_choice_status == 2){
                goto Welcome;
            }
           
            else if (game_choice_status == 3){
                //Game Condition
              // printf("Extracted Word = %s and length = %d",extracted_word,extracted_word_length);
               
               char dash_maker[extracted_word_length];
               dash_maker_outer[20]=dash_maker[extracted_word_length];
               for (i=0;i<extracted_word_length;i++){
                   dash_maker_outer[i]=dash;
               }
                 gaming_screen();
                 
                 goto Welcome;
                
            
              
            
                
            }
         
            
            




            }
   
    else if( usr_choice == 2){
        loading_box(usr_choice);
        information(); 
        goto Welcome;
     }
    else if(usr_choice == 3 ){
        loading_box(usr_choice);
        credit();
        goto Welcome;
    }   
    else if (usr_choice == 4){
      exit_condition=1;
      loading_box(usr_choice);
      goto Exit;
    }
    else{
         system("color 0C");
        printf("\n    Please, select number from the list !!!\n");
        Beep (3200,400);
        Beep (3200,400);
        Sleep(1500);
        goto Welcome; 
    }
 }
}


