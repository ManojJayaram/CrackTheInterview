/*
    Program to take std input and display MAX_CHAR  characters ended with a newline character
    if the number of input is less than MAX_CHAR  it has to appended with terminating null characters
*/

#include <stdio.h>
#define MAX_CHAR 10
int main()  {
    char buffer[ MAX_CHAR + 1 ];
    int count = 0, ch = 0, i = 0;

    while( (ch = getchar()) != '@')  {

        buffer[count++] = ch;
        if( MAX_CHAR  == count ) {

            buffer[ MAX_CHAR ] = '\n';
            for(i = 0; i < MAX_CHAR; i++)
                printf("%c", buffer[i]);
            count  = 0;
            buffer[ MAX_CHAR ] = 0;
        }

    }
    //If the entered character is less than MAX_CHAR  pad spaces to it
    if( count != MAX_CHAR - 1)  {

        for(i = count; i < (MAX_CHAR - 1); i++)
            buffer[ i ] = ' ';
        buffer[ MAX_CHAR - 1 ] = '\n';
        count = 0;
        for(i = 0; i < MAX_CHAR; i++)
            printf("%c", buffer[i]);
    }
}

