#include <stdio.h>

void reverse(char *start) {
    int word_length = 0, i = 0, j = 0;
    char temp, *word;
    while(*start) 
    {
        start++;
        word_length++;
        if((*start == ' ') || (*start == '\0'))
        {
            word = start - word_length;
            for(i = 0, j = word_length - 1; i < (word_length)/2; i++, j--)
            {
                temp = *(word + i);
                *(word + i) = *(word + j);
                *(word + j) = temp;
            }
        word_length = 0;
        start++;
        }

    }

}

int main()  {
    char str[] = "reverse word string";
    reverse(str);
    printf("%s\n", str);
}
