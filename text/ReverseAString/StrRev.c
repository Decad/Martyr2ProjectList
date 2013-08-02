/*
*  Program spec: Enter a string and the program will reverse it and print it out.
*
*  Author: Declan Cook
*/

#include "stdio.h"
#include <string.h>

#define BUFFER_LENGTH 128


char* strrev(char* str){
    char tmp;
    // Don't count terminating char to leave it at the end
    size_t len = strlen(str) - 1;

    //swap the first and last chars using tmp, stop at the middle
    for (int i = 0; i < len / 2; ++i)
    {
        tmp = str[i];
        str[i] = str[len - i];
        str[len - i] = tmp;
    }

    return str;
}

int main(int argc, char const *argv[])
{
    //Declare buffer for input
    char input[BUFFER_LENGTH];
    char *ret;

    ret = fgets(input, BUFFER_LENGTH, stdin);

    // something went wrong getting stdin
    if(ret == NULL)
        return -1;

    //Strip new line char '\n' from input
    size_t len = strlen(input) - 1;

    // check to ensure last character is infact a newline char
    if(input[len] == '\n')
        input[len] = '\0';

    //output the reversed string
    printf("%s\n", strrev(input));

    return 0;
}
