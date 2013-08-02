/*
 *  Program spec: Enter a string and the program counts the number of vowels in the text.
 *  For added complexity have it report a sum of each vowel found
 *
 *  Author: Declan Cook
 */

#import "stdio.h"
#include <ctype.h>

#define BUFFER_LENGTH 128

int main(int argc, char const *argv[])
{
    int ch;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    ch = getchar();
    while(ch != EOF && ch != '\n'){
        ch = tolower(ch);
        switch(ch){
            case 'a':
                ++a;
                break;
            case 'e':
                ++e;
                break;
            case 'i':
                ++i;
                break;
            case 'o':
                ++o;
                break;
            case 'u':
                ++u;
                break;
        }
        ch = getchar();
    }
    int total = a + e + i + o + u;
    printf("%d vowels found:\nA:%d\nE:%d\nI:%d\nO:%d\nU:%d\n", total, a, e, i, o, u);
    return 0;
}
