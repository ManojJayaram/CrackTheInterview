#include <stdio.h>
int strend(char *s, char *t)
{
    char *sptr = s;
    while(*sptr != '\0')
        sptr++;
    if(*(sptr - 1) == *t)
        return 1;
        else
            return 0;
}

int main()
{
    char *s = "hello aunty";
    printf("%d\n", strend(s, "t"));
}


