#include<stdio.h>
#include<ctype.h> 
#include<string.h> 
#include<time.h> 

int a = 0; // Variable ini digunakan untuk menggambarkan indeks halaman
char name[20]; 
int ques = 0;
char option = ' ';
char current[] = {'>',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}; 
int randomizer[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
long money_now[] = {5000, 10000, 20000, 40000, 80000, 160000, 320000, 640000, 1250000, 2500000, 5000000, 10000000, 30000000, 50000000, 70000000};

struct data_var 
{
    char question[100];
    char a[35];
    char b[35];
    char c[35];
    char d[35];
    char solution;
} set[15]; 

void Initialize()
{
    strcpy(set[0].question, "Lake Lucerne has complicated shape with several sharp bends and four arms,it is located in");
    strcpy(set[0].a, "Egypt");
    strcpy(set[0].b, "Switzerland");
    strcpy(set[0].c, "Kenya");
    strcpy(set[0].d, "Belarus");
    set[0].solution = 'B';
    
    strcpy(set[1].question, "Who was the first woman to head public sector bank?");
    strcpy(set[1].a, "Arundhati Bhattacharya");
    strcpy(set[1].b, "Shikha Sharma");
    strcpy(set[1].c, "Chanda Kochar");
    strcpy(set[1].d, "Usha Ananthasubramanyan");
    set[1].solution = 'A';

    strcpy(set[2].question, "Where is Bose Institute?");
    strcpy(set[2].a, "Dispur");
    strcpy(set[2].b, "Kolkata");
    strcpy(set[2].c, "New Delhi");
    strcpy(set[2].d, "Mumbai");
    set[2].solution = 'B';

    strcpy(set[3].question, "When is the International Yoga Day celebrated?");
    strcpy(set[3].a, "June 21");
    strcpy(set[3].b, "March 21");
    strcpy(set[3].c, "April 22");
    strcpy(set[3].d, "May 31");
    set[3].solution = 'A';

    strcpy(set[4].question, "The motif of \'Hampi with Chariot\' is printed on the reverse of which currency note?");
    strcpy(set[4].a, "One Rupee note");
    strcpy(set[4].b, "500 Rupee note");
    strcpy(set[4].c, "50 Rupee note");
    strcpy(set[4].d, "1000 Rupee note");
    set[4].solution = 'C';

    strcpy(set[5].question, "Which of the following metals forms an amalgam with other metals?");
    strcpy(set[5].a, "Mercury (Hg)");
    strcpy(set[5].b, "Tin (Sn)");
    strcpy(set[5].c, "Lead (Pb)");
    strcpy(set[5].d, "Zinc (Zn)");
    set[5].solution = 'A';

    strcpy(set[6].question, "Which is the first country to commence competitive examination in civil services?");
    strcpy(set[6].a, "Turkmenistan");
    strcpy(set[6].b, "India");
    strcpy(set[6].c, "United Kingdom");
    strcpy(set[6].d, "China");
    set[6].solution = 'D';

    strcpy(set[7].question, "Who among the following got two Nobel prizes of which one was in Peace?");
    strcpy(set[7].a, "Albert Einstein");
    strcpy(set[7].b, "H.G. Khorana");
    strcpy(set[7].c, "Linus Pauling");
    strcpy(set[7].d, "Paul Berg");
    set[7].solution = 'C';

    strcpy(set[8].question, "The first Indian State to go wholly organic is -");
    strcpy(set[8].a, "Meghalaya");
    strcpy(set[8].b, "Sikkim");
    strcpy(set[8].c, "Manipur");
    strcpy(set[8].d, "Kerala");
    set[8].solution = 'B';

    strcpy(set[9].question, "\'Line of Blood\' is a book written by whom?");
    strcpy(set[9].a, "Diksha Basu");
    strcpy(set[9].b, "Ursula Vernon");
    strcpy(set[9].c, "Amal EI-Mohtar");
    strcpy(set[9].d, "Bairaj Khanna");
    set[9].solution = 'D';

    strcpy(set[10].question, "What is the name of Indira Gandhi's samadhi?");
    strcpy(set[10].a, "Shanti Ghat");
    strcpy(set[10].b, "Shakti Sthal");
    strcpy(set[10].c, "Shanti Van");
    strcpy(set[10].d, "Shanti Sthal");
    set[10].solution = 'B';

    strcpy(set[11].question, "Who was the first batsman to score three test century in three successive tests on debut?");
    strcpy(set[11].a, "Chris Gayle");
    strcpy(set[11].b, "Sachin Tendulkar");
    strcpy(set[11].c, "Virat Kohali");
    strcpy(set[11].d, "Mohd. Azharuddin");
    set[11].solution = 'D';

    strcpy(set[12].question, "Madhya Pradesh State was constituted on -");
    strcpy(set[12].a, "01/11/1959");
    strcpy(set[12].b, "01/09/1956");
    strcpy(set[12].c, "01/11/1956");
    strcpy(set[12].d, "01/09/1951");
    set[12].solution = 'C';

    strcpy(set[13].question, "Who introduced \'Green Army\' for environment conservation?");
    strcpy(set[13].a, "Japan");
    strcpy(set[13].b, "China");
    strcpy(set[13].c, "Australia");
    strcpy(set[13].d, "Egypt");
    set[13].solution = 'C';

    strcpy(set[14].question, "According to WHO, the most affected country by Ebola was -");
    strcpy(set[14].a, "Nigeria");
    strcpy(set[14].b, "Mali");
    strcpy(set[14].c, "Liberia");
    strcpy(set[14].d, "Senegal");
    set[14].solution = 'C';
    
}

void start() 
{
    system("clear");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t   ██╗  ██╗   ██████╗     ██████╗TM\n");
    printf("\t\t\t\t\t\t\t   ██║ ██╔╝   ██╔══██╗   ██╔════╝\n");
    printf("\t\t\t\t\t\t\t   █████╔╝    ██████╔╝   ██║     \n");
    printf("\t\t\t\t\t\t\t   ██╔═██╗    ██╔══██╗   ██║     \n");
    printf("\t\t\t\t\t\t\t   ██║  ██╗██╗██████╔╝██╗╚██████╗\n");
    printf("\t\t\t\t\t\t\t   ╚═╝  ╚═╝╚═╝╚═════╝ ╚═╝ ╚═════╝\n");
    printf("\t\t\t\t\t\t\t       Kaun Banega Crorepati\n");
    printf("\t\t\t\t\t\t\t      ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n");
    printf("\n\n");
    printf("\t\t\t\b\bWelcome to Kaun Banega Crorepati(K.B.C)! A game show where you can win 7 crore rupees by answering simple\n");
    printf("\t\t\t\b\bGeneral Knowledge and Current Affairs Questions. So are you ready to Win?\n\n\t\t\t\b\bNOTE: This game is best enjoyed in FULL-SCREEN mode (If you are not already, then RESTART).\n");
    printf("\t\t\t\b\bIf you are in the linux terminal and the characters are overflowing, please zoom out or make the font size small.\n\n\n");
    printf("\t\t\t\b\bEnter Y to CONTINUE or N (or any other key) to QUIT. YOUR CHOICE -> ");
    char ch = getchar();
    if(toupper(ch) == 'Y') 
    {
        a=1;
    }
    else
    exit(0);
}

void name_data() 
{
    system("clear"); 
    printf("\t\t\t\t\t\t\tEnter name: ");
    scanf("%s", name);
    printf("\n\n\t\t\t\t\t\t\t\b\b%s, welcome to KBC.\n\n", name);
    a=2; 
}

void rules() 
{
    printf("\t\t\t\t\tSo here are some rules and tips for the game for you.\n\n");
    printf("\t\t\t\t\t\t\tRULES & INSTRUCTIONS\n");
    printf("\t\t\t\t\t\t\t\b______________________\n\n");
    printf("\t1.) In order to WIN THE FINAL PRIZE of Rs.7,00,00,000, you need to answer ALL the 15 questions CORRECTLY.\n");
    printf("\t2.) The time you answer a question INCORRECTLY (Meaning choosing the wrong option), your game will be OVER.\n");
    printf("\t3.) There are 4 CHECKPOINTS in the game (indicated by [C*] sign in the money dashboard (present on the left side) of the game). The\n");
    printf("\t     checkpoint questions are Question 4 (40,000), Question 8 (6,40,000), Question 12 (1 Crore) and Question 15 (7 Crore).\n");
    printf("\t4.) Each of these 4 CHECKPOINTS (which is mentioned in the last point), when reached, ensure that amount to be won even if you are \n");
    printf("\t    not able to reach the next checkpoint.\n");
    printf("\t5.) Your CURRENT POSITION in the money dashboard is indicated by the CHEVRON(>>) symbol on the LEFT SIDE of the slab.\n");
    printf("\t6.) You get TWO LIFELINES in the game, namely FIFTY-FIFTY and FLIP THE QUESTON. Both of these are explained in the next two points.\n");
    printf("\t7.) FIFTY-FIFTY, as the name suggests, ERASES TWO WRONG OPTIONS (RANDOMLY) from the screen. To use FIFTY-FIFTY, ENTER F on the console.\n");
    printf("\t8.) FLIP THE QUESTION can be used when YOU DONT KNOW THE ANSWER TO THE QUESTION ON THE SCREEN, you can use this oprtion to change \n");
    printf("\t    it for an ALTERNATIVE QUESTION. ENTER P to use.\n");
    printf("\t9.) You can QUIT the game whenever you want, by ENTERING Q in the console. When you quit, the amount that you will take with you is \n");
    printf("\t    the amount mentioned in the LAST CHECKPOINT.\n");
    printf("\t10.) Also remember, if you ENTER any KEY other than the keys mentioned in the POINTS ABOVE (For example W,K,J...), there will be NO EFFECT.\n");
    printf("\t11.) You can ENTER ANY OPTION in either of the two cases, that is both lowercase and UPPERCASE. BOTH WILL BE EVALUATED AS SAME.\n");
    printf("\t11.) Though this point is not any instruction, we just wanted to tell you that this is NOT a STATIC GAME. By STATIC GAME, we mean that\n");
    printf("\t     a game that displays the same question at a particular question number. In our game, though our question bank is limited (40 Ques), but\n");
    printf("\t     BUT everytime you start the game, 15 Random Questions will be chosen from our question bank and presented on your screen. This concept \n");
    printf("\t     is also applied in the LIFELINE part too, this makes our game unique. For more information please refer to the README.txt file provided.\n");
    printf("\t12.) If you ENTER multiple charcters as input in the terminal, ONLY THE FIRST CHARACTER of the string will be taken as the input.\n");
    printf("\t     BEST OF LUCK!!!!\n\n");
    printf("\t\t\t\t\tPress ANY KEY followed by ENTER to Continue.... ");
    char ch = getchar();
    getchar();
    a=3;
}

long check_money() 
{
    long pass; 
    if(ques >= 4 && ques <= 7)
    pass = money_now[3];
    else if(ques >= 8 && ques <= 11)
    pass = money_now[7];
    else if(ques >= 12 && ques <= 14)
    pass = money_now[11];
    else
    pass = 0;
    
    return pass;
}

void questionnaire() 
{
    system("clear"); 
    Initialize();
    int l;
    char ch = ' ';
    char quest[100] ; 
    char opA[35] ; 
    char opB[35] ; 
    char opC[35] ; 
    char opD[35] ; 

    l = strlen(quest); 
    if(ques>=9)
    { 
        for(int i=1; i<(91-l); i++)
        {
           strncat(quest, &ch, 1);
        }
    }
    else
    { 
        for(int i=1; i<(92-l); i++)
        {
           strncat(quest, &ch, 1); 
        }
    }
    l = strlen(opA);
    for(int i=1; i<(28-l); i++)
    {
       strncat(opA, &ch, 1); 
    }
    l = strlen(opB);
    for(int i=1; i<(28-l); i++)
    {
       strncat(opB, &ch, 1); 
    }
    l = strlen(opC);
    for(int i=1; i<(28-l); i++)
    {
       strncat(opC, &ch, 1); 
    }
    l = strlen(opD);
    for(int i=1; i<(28-l); i++)
    {
       strncat(opD, &ch, 1); 
    }
    
    printf(" \n\n");
    printf(" \t\t\t\t\t\t\t\t'||'  |'  '||''|.     ..|'''.| \n");
    printf(" \t\t\t\t\t\t\t\t || .'     ||   ||  .|'     '  \n");
    printf(" \t\t\t\t\t\t\t\t ||'|.     ||'''|.  ||         \n");
    printf(" \t\t\t\t\t\t\t\t ||  ||    ||    || '|.      . \n");
    printf(" \t\t\t\t\t\t\t\t.||.  ||. .||...|'   ''|....'  \n");
    printf(" \n");
    printf(" \t\t\t\t\t    %s, Question for Rupees %lu is now on your computer Screen:\n", name, money_now[ques]);
    printf("   _______________\n");
    printf("%c%c│    7 CRORE    │[C*]\t\t  /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\ \n", current[14], current[14]);
    printf("%c%c│    5 CRORE    │    \t\t-( Q.%d> %s)-\n",current[13],current[13],(ques+1),quest);
    printf("%c%c│    3 CRORE    │    \t\t  \\_______________________________________________________________________________________________/\n",current[12], current[12]);
    printf("%c%c│    1 CRORE    │[C*]\n",current[11], current[11]);
    printf("%c%c│  50,00,000    │\n",current[10], current[10]);
    printf("%c%c│  25,00,000    │\n",current[9], current[9]);
    printf("%c%c│  12,50,000    │    \t\t  /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\                                 /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\ \n", current[8], current[8]);
    printf("%c%c│   6,40,000    │[C*]\t\t-( A.> %s)-------------------------------( B.> %s)-\n",current[7],current[7],opA,opB);
    printf("%c%c│   3,20,000    │    \t\t  \\______________________________/                                 \\______________________________/\n", current[6], current[6]);
    printf("%c%c│   1,60,000    │\n",current[5], current[5]);
    printf("%c%c│     80,000    │    \t\t  /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\                                 /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\\ \n", current[4], current[4]);
    printf("%c%c│     40,000    │[C*]\t\t-( C.> %s)-------------------------------( D.> %s)-\n",current[3],current[3],opC,opD);
    printf("%c%c│     20,000    │    \t\t  \\______________________________/                                 \\______________________________/\n", current[2], current[2]);
    printf("%c%c│     10,000    │\n",current[1], current[1]);
    printf("%c%c│      5,000    │\n", current[0], current[0]);
    printf("   ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾        ENTER Q if you want to QUIT. If you QUIT now, you can take INR %lu with you.\n\n", check_money());
    printf(" \t\t\t  ENTER your CHOICE : ");
    char str[25];
    scanf("%s", str);
    option = str[0];
    
    a = 4; 
}

void checkpoint() 
{
    system("clear"); 
    int Ch_No = (ques == 3) ? 1 : ((ques == 7) ? 2 : 3); 
    int Nex_Ch = (ques == 3) ? 8 : ((ques == 7) ? 12 : 15); 
    int af_ch = (ques == 3) ? 4 : ((ques == 7) ? 4 : 3); 
    long conf_amt = (ques == 3) ? 40000 : ((ques == 7) ? 640000 : 10000000); 
    printf("\n\n\n");
    printf("\t\t\t\t\t   ██████  ██████  ███    ██  ██████  ██████   █████  ████████ ███████ ██\n");
    printf("\t\t\t\t\t  ██      ██    ██ ████   ██ ██       ██   ██ ██   ██    ██    ██      ██\n");
    printf("\t\t\t\t\t  ██      ██    ██ ██ ██  ██ ██   ███ ██████  ███████    ██    ███████ ██\n");
    printf("\t\t\t\t\t  ██      ██    ██ ██  ██ ██ ██    ██ ██   ██ ██   ██    ██         ██   \n");
    printf("\t\t\t\t\t   ██████  ██████  ██   ████  ██████  ██   ██ ██   ██    ██    ███████ ██\n");
    printf("\t\t\t\t\t    __________________________________________________________________\n");
    printf("\t\t\t\t\t   /_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/\n\n\n");
    printf("\t\t\t\t\t\t\t\t   CHECKPOINT ACHIEVED\n\n\n");
    printf("\t\t\t\t\t  CHECKPOINT NUMBER : %d\n\n", Ch_No);
    printf("\t\t\t\t\t  CONFIRMED AMOUNT TO BE WON : INR %lu\n\n", conf_amt);
    printf("\t\t\t\t\t  NEXT CHECKPOINT AT : Ques %d\n\n", Nex_Ch);
    printf("\t\t\t\t\t  NEXT CHECKPOINT AFTER IS AFTER %d QUESTIONS\n\n\n", af_ch);
    printf("\t\t\t\t\t  Press ENTER to CONTINUE THE GAME");
    char ch = getchar();
}

void won() 
{
    system("clear");
    printf("\n\n\n");
    printf("\t\t\t\t\t  ██    ██  ██████  ██    ██     ██     ██  ██████  ███    ██ ██\n"); 
    printf("\t\t\t\t\t   ██  ██  ██    ██ ██    ██     ██     ██ ██    ██ ████   ██ ██\n"); 
    printf("\t\t\t\t\t    ████   ██    ██ ██    ██     ██  █  ██ ██    ██ ██ ██  ██ ██\n"); 
    printf("\t\t\t\t\t     ██    ██    ██ ██    ██     ██ ███ ██ ██    ██ ██  ██ ██  \n");
    printf("\t\t\t\t\t     ██     ██████   ██████       ███ ███   ██████  ██   ████ ██\n\n\n"); 
    printf("\t\t\t\t\t  ALL OF THE 7 CRORE PRIZE MONEY NOW BELONGS TO YOU!!\n");
    printf("\t\t\t\t\t  %s, YOU ARE NOW A CROREPATI!!\n\n\n\n", name);
    printf("\t\t\t\t\t  PRESS ENTER / ANY KEY FOLLOWED BY ENTER TO QUIT ");
    char ch = getchar();
    exit(0);
}


void game_over() 
{
    system("clear");
    printf("\n\n\n");
    printf("\t\t\t\t\t   ██████   █████  ███    ███ ███████      ██████  ██    ██ ███████ ██████  \n");
    printf("\t\t\t\t\t  ██       ██   ██ ████  ████ ██          ██    ██ ██    ██ ██      ██   ██ \n");
    printf("\t\t\t\t\t  ██   ███ ███████ ██ ████ ██ █████       ██    ██ ██    ██ █████   ██████  \n");
    printf("\t\t\t\t\t  ██    ██ ██   ██ ██  ██  ██ ██          ██    ██  ██  ██  ██      ██   ██ \n");
    printf("\t\t\t\t\t   ██████  ██   ██ ██      ██ ███████      ██████    ████   ███████ ██   ██ \n\n\n");
    printf("\t\t\t\t\t\t\t\t\t GAME STATS\n\n");
    printf("\t\t\t\t\t  FINAL AMOUNT WON (WHICH YOU CAN TAKE HOME): INR %lu\n", check_money());
    printf("\t\t\t\t\t  LAST QUESTION REACHED: %d\n", (ques+1));
    printf("\t\t\t\t\t  AMOUNT IN LAST QUESTION: INR %lu\n", money_now[ques]);
    printf("\t\t\t\t\t  PRESS ENTER TO QUIT ");
    char ch = getchar();
    exit(0);
}

void sorry() 
{
    system("clear");
    printf("\n\n\n");
    printf("\t\t\t\t\t  ███████  ██████  ██████  ██████  ██    ██ ██ \n");
    printf("\t\t\t\t\t  ██      ██    ██ ██   ██ ██   ██  ██  ██  ██ \n");
    printf("\t\t\t\t\t  ███████ ██    ██ ██████  ██████    ████   ██ \n");
    printf("\t\t\t\t\t       ██ ██    ██ ██   ██ ██   ██    ██       \n");
    printf("\t\t\t\t\t  ███████  ██████  ██   ██ ██   ██    ██    ██ \n\n\n");
    printf("\t\t\t\t\t\t\t    ██\n");
    printf("\t\t\t\t\t\t\t██ ██ \n");
    printf("\t\t\t\t\t\t\t   ██ \n");
    printf("\t\t\t\t\t\t\t██ ██ \n");
    printf("\t\t\t\t\t\t\t    ██\n\n\n");
    printf("\t\t\t\t%s, You didn't won any money this time, bad luck maybe. We all know that you deserve better.\n",name);
    printf("\t\t\t\tTry again next time. Best of LUCK!!\n");
    printf("\t\t\t\tPRESS any KEY followed by ENTER OR only the ENTER key to QUIT ");
    char ch = getchar();
    exit(0);
}

int main() 
{
    while(a!=1){start();} 
    while(a!=2){name_data();} 
    while(a!=3){rules();} 
    while(a!=4){ 
        while(ques!=15){
            questionnaire(); 
            option = toupper(option); 
            if(option == 'A' ||option == 'B' ||option == 'C' ||option == 'D') 
            {
                if(set[ques].solution == option){ 
                    printf("\t\t\t  CORRECT ANSWER!!!! (MONEY WON: %lu)\n\t\t\t  Press ENTER to CONTINUE..", money_now[ques]);
                    char ch = getchar();
                    getchar();
                    if(ques == 14) 
                    {
                        won();
                    }
                    if(ques == 3 || ques == 7 || ques == 11) 
                    {
                        checkpoint();
                    }
                }
                else 
                {
                    printf("\t\t\t  WRONG ANSWER (Correct Option: %c)\n\t\t\t  Press ENTER to CONTINUE..", set[ques].solution);
                    char ch = getchar();
                    getchar();
                    if(check_money() == 0) 
                    {
                        sorry();
                    }
                    else 
                    {
                        game_over();
                    }
                }
                
            if(option == 'Q') 
            {
                char ch;
                printf("\t\t\t  Are you sure? [Y/N] "); 
                scanf(" %c", &ch);
                ch = toupper(ch);
                if(ch == 'Y')
                {game_over();}
                else
                {continue;}
            }
            else 
            {
                continue;
            }
            current[ques+1]='>'; 
            ques++; 
            }
        }
    }
}
