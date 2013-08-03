/*
*  Program spec: Enter a string and the program will reverse it and print it out.
*
*  Author: Declan Cook
*/

#include "stdio.h"
#include <string.h>

#define BUFFER_LENGTH 128

int ispalindrome(char* str){

    char *begin = str;
    char *end = str + strlen(str) - 1;

    while(begin < end) {
      if(*begin != *end)
        return 0;
      ++begin;
      --end;
    }
    return 1;
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

    if(ispalindrome(input)){
        printf("Input was a palindrome\n");
    } else {
        printf("Input was not a palindrome\n");
    }


    return 0;
}
