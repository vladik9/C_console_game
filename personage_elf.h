#ifndef PERSONAGE_ELF_H_INCLUDED
#define PERSONAGE_ELF_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include<time.h>
#include"game_task.h"
#include"personage_elf.h"
#include"personage_orc.h"
#include"personage_wizard.h"

/////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////   Personajul Elf   //////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

int healt= 100;
int skill= 90;

void elfPersonage()
{



    printf("\033[0m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////                           Imagine Elf si descriere personaj                ///////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    printf("\033[1;33m");
    printf(" |                            .-----.                            |              Elf\n"
           " |                    \ ' /   _/    )/                            | this character is equipped with \n"
           " |                   - ( ) -('---''--)                           | a bow and has the opportunity to \n"
           " |                    / . \((()\^_^/)()                            | shoot arrows, the price of one arrow \n"
           " |                     \\_\ (()_)-((()()                           | is 10 points from Skill now you have 9 arrows\n"
           " |                      '- \ )/\._./0 #                            ----------------------------------------------------\n"
           " |                       '/\/([ X   ]  ''       \n"
           " |                         (___)(___)   ''         \n"
           " |                             |.#_|(___)              # \n"
           " |                            /\    \ ( (_               (     \n"
           " |                            \/\/\/\) \\                    1    \n"
           " |                            | / \ |                      )   \n"
           " |                            |(   \|                 ##------------->  9 arrows\n"
           " |                           _|_)__|_\_                     )      \n"
           " |                           )...()...(                   1      \n"
           " |                            | (   \ |                   )       \n"
           " |                         .-'__,)  (  \                  # \n"
           " |                               '\_-,""\n"
           "\033[0m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");


}

#endif // PERSONAGE_ELF_H_INCLUDED
