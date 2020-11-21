#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<conio.h>  // for getch();
#include <math.h>
#include"personage_elf.h"
#include"personage_orc.h"
#include"personage_wizard.h"
#include"game_task.h"
#include"music.h"
#include<time.h>

int main()
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////       Timer Start         /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    time_t start;
    volatile long unsigned counter;
    start = time(NULL);
    musicIntro();
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////       Main Program         /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("@cls||clear");
    char player_name[15];
    int personage_choose;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////       Banner Start        /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for(int i=5; i>0; i--)
    {
        SetConsoleTextAttribute(hConsole,i);
        printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

        printf("\n\n"
               "          +      MN              MN   88                             88                                        +  \n"
               "\t  |      MNMN          MNMN         ,adPPYba,    ,adPPYba,         8b,dPPYPYba,   8b,dPPYPYba,         |\n"
               "\t  |      MN  MN      MN  MN   ma    jk           jk          ma    88P'`    8a    88P'`    8a          |\n"
               "\t  |      MN    MN  MN    MN   ma    P88          P88         ma    88       88    88       88          |\n"
               "\t  |      MN      MN      MN   ma       P8845        P8845    ma    88       88    88       88          |\n"
               "\t  |      MN              MN   ma           8b,          8b,  ma    88       88    88       88          |\n"
               "\t  |      MN              MN   ma    PaYYbbd8'    PaYYbbd8'   ma    88       88    88768687688          |\n"
               "\t  |                                                                                        95          |\n"
               "\t  |                                                                                        95          |\n"
               "\t  |                                                                                78      95          |\n"
               "\t  +                                                                                5363445695          +\n");
        //////
        printf(
            "\n\t  +\t                           88                                                                        \n"
            "\t  |\t                                                                                               +  \n"
            "\t  |\t8b,dPPYba,    8b,dPPYba,   88  8b,dPPYPYba,  ,adPPYba,   ,adPPYba,    ,adPPYba,   ,adPPYba,    |\n"
            "\t  |\t88P'      8a  88P'   Y8    88  88P'`    8a  a8          a8P_____ 88   P88         P88          |\n"
            "\t  |\t88        d8  88           88  88       88  8b          8PP      ""       P88         8aa        |\n"
            "\t  |\t88b,   ,a8    88           88  88       88  8a,    ,aa   8b,    ,aa          8b,         8b,   |   \n"
            "\t  |\t88`YbbdP''    88           88  88       88    xYbbd8'    ` Ybbd8'     PaYYbbd8'    PaYYbbd8'   |    \n"
            "\t  |\t88                                                                                             |     \n"
            "\t  +\t88                                                                                             +               \n");
        printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

        Sleep(1000);
        system("@cls||clear");
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////       Banner End        /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////   Menu, selecting option    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    menu_entry();

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////   The begin of the game   /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    SetConsoleTextAttribute(hConsole,7);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t\t\t\tWelcome to kidnapped Princess Story!\n\n\t\t\t\t\t For the beginning enter your name:\n");
    printf("\t\t\t\t\t\t\t\t\t    ");
    scanf("%s",&player_name);
    printf("\n\t\t\t\tOk \033[0;32m%s\033[0m let's choose a personage from the list below:\n",player_name);

    printf("\033[0m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t\t\t\t\033[0;32m1.\033[0m Elf\t\tSkill: 90 \tHealt: 100\n\t\t\t\t\t\033[0;32m2.\033[0m Orct\t\tSkill: 100\tHealt: 80\n\t\t\t\t\t\033[0;32m3.\033[0m Wizard\tSkill: 100\tHealt: 70\n");

    printf("\033[0m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t\t\t\t\t\t\t\t    ");
    scanf("%d",&personage_choose);
    int user_yes_no;
    switch(personage_choose)
    {
    case 1:
    {
        printf("\t\t\tYou choose the character \033[1;33m%d\033[0m, now and to the end of the game you will be \033[1;34mElf! \033[0m\n\n",personage_choose);
        goto option_yes_no;
        break;
    }

    case 2:
    {
        printf("\t\t\tYou choose the character \033[1;33m%d\033[0m, now and to the end of the game you will be \033[1;34mOrc!\033[0m\n\n",personage_choose);
        goto option_yes_no;
        break;
    }

    case 3:
    {
        printf("\t\t\tYou choose the character \033[1;33m%d\033[0m, now and to the end of the game you will be \033[1;34mWizard!\033[0m\n\n",personage_choose);
        goto option_yes_no;
        break;
    }
    default:
    {
        printf("\t\t\tYou don't choose  a valid option, you enter %d, Game is Over\n",personage_choose);
        Sleep(2000);
        theEndOfGameFall();
        return 0;
        break;
    }
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////    Goto option for player     ///////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
option_yes_no:
    printf("\033[0m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t\t\tThe game is an adventure, and is too dangerous, type:\n\n \t\t\t\t\t\t\033[0;32m1.\033[0m for Yes, if you want to continue\n \t\t\t\t\t\t\033[0;31m2.\033[0m for No, to quit from the game\n");
    printf("\t\t\t\t\t\t\t\t\t    ");
    scanf("%d",&user_yes_no);

    if(user_yes_no==1)
    {
        printf("\t\t\t\tYou are not a scary person, as I thought\n");
        printf("\t\t\t\tLet's Begin \033[0;32m%s\033[0m \n",player_name);
    }
    else if(user_yes_no==2)
    {
        printf("\t\t\t\tYou  are scary so, the Game is Over\n");
        theEndOfGameFall();
        return 0;
    }
    else
    {
        printf("\t\t\t\tYou  don't give a valid answer so the game is over!\n");
        goto option_yes_no;
    }
    printf("\033[0m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////        Personage info        ///////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    system("@cls||clear");
    SetConsoleTextAttribute(hConsole,10);
    gameStory();
    Sleep(5000);

    printf("\n\t\t\t\t\t \033[0;32m%s\033[0m your personage is an: \n",player_name);
    if(personage_choose==1)
    {
        //Elf
        elfPersonage();
        Sleep(2000);
    }
    else if(personage_choose==2)
    {
        //Orc

        orcPersonage();
        Sleep(2000);
    }
    else
    {

        //Wizzard
        wizzardPersonage();
        Sleep(2000);
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////  Player choice the direction  ///////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    kidnaopedPrincess();
    system("@cls||clear");
    printf("\t\t\tFor now, you can choose where to go to search for the princess,\n \t\t\tenter your option:\n\n");
    printf("\t\t\t\t\t\t1. The dark forest\n\t\t\t\t\t\t2. The lost mount \n\t\t\t\t\t\t3. The sea of crying souls\n\n");
    printf("\t\t\t\t\t\t\t\t\t    ");
    scanf("%d",&personage_choose);
    if (personage_choose==1)
    {
        //this case fall-can win second, or fall if third
        printf("\t\t\t\tYou attend to go to the dark forest\n");
        kingQuestion();
        system("@cls||clear");
        first_option();
    }
    else if(personage_choose==2)
    {
        //this case win-first
        printf("\t\t\t\tYou attend to go to the  Lost mount\n");
        kingQuestion();
        system("@cls||clear");
        second_option();
        printf("\t\t\t\t\t\tWe find the princess, but we need first to win the dragon\n\n");
        Sleep(2000);
        dragonImage_fight();
        Sleep(2000);
        theEndOfGameWin();

    }
    else if(personage_choose==3)
    {
        //this case fall-can win second, or fall if third
        printf("\t\t\t\tYou attend to go to the sea of crying souls\n");
        kingQuestion();// add a new line for sea road
        system("@cls||clear");
        third_option();
    }
    else
    {
        printf("\t\t\t\tYou  don't give a valid answer so the game is over!\n");
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////       Timer Check         /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    time_t end = time(NULL);
    int total_time = (int) difftime(end, start);
    printf("The total time is: \n");
    printf("\t\t\t\t\t\t%d",total_time);

    return 0;

}
