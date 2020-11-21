#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include<time.h>
#define BUFFER_SIZE 1000


void writeFile(FILE * fPtr);


int writeFunction()
{
    /* File pointer to hold reference of input file */
    FILE *fPtr;
    char dataToAppend[BUFFER_SIZE];


    /* Input file path to remove empty lines from user */
    /*  Open all file in append mode. */
    fPtr = freopen("save.txt", "r", fPtr);


    /* fopen() return NULL if unable to open file in given mode. */
    if (fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open '%s' file.\n", "save.txt");
        printf("Please check whether file exists and you have write privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* Input data to append from user */
    printf("\nEnter data to append: ");
    fflush(stdin);          // To clear extra white space characters in stdin
    fgets(dataToAppend, BUFFER_SIZE, stdin);


    /* Append data to file */
    fputs(dataToAppend, fPtr);


    /* Reopen file in read mode to print file contents */
    fPtr = freopen("save.txt", "r", fPtr);

    /* Print file contents after appending string */
    printf("\nSuccessfully appended data to file. \n");
    printf("Changed file contents:\n\n");
    readFile(fPtr);


    /* Done with file, hence close file. */
    fclose(fPtr);

    return 0;
}



/**
 * Reads a file character by character
 * and prints on console.
 *
 * @fPtr    Pointer to FILE to read.
 */
void readFile(FILE * fPtr)
{
    char ch;

    do
    {
        ch = fgetc(fPtr);

        putchar(ch);

    } while (ch != EOF);
}
