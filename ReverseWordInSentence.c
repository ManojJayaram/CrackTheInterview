/* 
    Program to reverse words in a Sentence
    I/P: Manipal Institute of technology
    O/P: technology of Institute Manipal
    */
#include <stdio.h>

char *ReverseWordInSentence(char *Sentence) {
    char *ptr = NULL, Dst_Str = NULL, *cpy_ptr = NULL;
    int Str_len = 0, word_len = 0;
    Str_len = strlen(Sentence);
    Dst_Str = (char *)malloc(Str_len * (sizeof(char)));
    while(Str_len)  {
        if(*ptr != ' ') {
            ptr--;
            str_len--;
            word_count++;
        }
        else    {
            cpy_ptr = ptr;
            cpy_ptr++;
            while(word_count)   {
                *Dst_Str++ = *cpy_ptr++;
            }
            *Dst_Str++ = ' ';
            word_count = 0;
        }
        *Dst_Str++ = '\0';
    }
}
int main(int argc, char **argv) {
    char *ptr = "Manipal Institute of technology"
    printf("%s\n",everseWordInSentence(ptr));
}
