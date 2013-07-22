#include <stdio.h>

void reverse(char *word_ptr, int count)
{
    char *reverse_ptr = NULL, temp;
    int i = 0, j = 0;
    reverse_ptr = word_ptr - count;
    for(i = 0, j = count; i < count/2; i++)
    {
        temp = *(reverse_ptr + i);
        *(reverse_ptr + i) = *(reverse_ptr + j - 1);
        *(reverse_ptr + j - 1) = temp;
    }

}

char *zigzac(char *ptr)
{
    char *Return_ptr = NULL;
    int FLAG = 1, length_count = 0;
    Return_ptr = ptr;

    while(*ptr)
    {
        if(*ptr == ' ')
            FLAG = !FLAG;
        ptr++;

        if(0 == FLAG)
        {
            while(*ptr!= ' ' && *ptr!= '\0')
            {
                ptr++;
                length_count++;
            }
            reverse(ptr, length_count);
            ptr++;
            length_count = 0;
            FLAG = !FLAG;
        }
    }
    return Return_ptr;

}

int main()
{
    char string[] = " how are you what are you up to man";
    printf("%s\n",zigzac(string));
    return 0;
}
