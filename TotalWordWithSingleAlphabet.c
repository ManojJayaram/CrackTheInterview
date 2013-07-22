#include <stdio.h>
/* calculate letter in each word, if the letter in a word is one increment the single_letter_word count by one */
void TotalWordWithSingleAlphabet(char *str) {
    int character_word = 0, single_letter_word = 0;
    while(*str) {
        if((*str != ' '))
            character_word++;
        if(*str == ' ')
        {
            if(1 == character_word)
                single_letter_word++;
            character_word = 0;

        }
        str++;
    }
    printf("%d\n", single_letter_word);
}
int main(int argv, char *argv[])
{
    char *ptr = " a a a a king f ";
    TotalWordWithSingleAlphabet(ptr);
}
