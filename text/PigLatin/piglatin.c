/*
*  Program spec: Enter a string and the program will print out the word in pig latin
*
*  Author: Declan Cook
*/

#import "stdio.h"
#import <string.h>

#define BUFFER_LENGTH 128


int main(int argc, char const *argv[])
{

    char input[BUFFER_LENGTH];
    char *ret;

    ret = fgets(input, BUFFER_LENGTH, stdin);

    if (ret == NULL)
        return -1;

    //Strip new line char '\n' from input
    size_t len = strlen(input) - 1;

    // check to ensure last character is infact a newline char
    if(input[len] == '\n')
        input[len] = '\0';

    char firstChar = input[0];

    for (int i = 0; i < strlen(input); ++i)
    {
        input[i] = input[i + 1];
    }

    printf("%s-%c%s\n", input, firstChar, "ay");

    return 0;
}
