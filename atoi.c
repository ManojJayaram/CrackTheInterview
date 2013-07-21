#include <stdio.h>
#include <stdlib.h>

int my_atoi(char *input)    {
    int value = 0;
    //If the character is not a number dont enter the loop --> Read mam atoi
    while(*input >= '0' && *input<= '9')   
        value = value * 10 + (*input++ - '0');
    return value;
}
int main(int argc, char **argv)
{
    if(argc < 2)    {
        printf("\n\t my_atoi() CODE:\n\t INPUT:./binary (NUMBERED IN STRING TO BINARY)\n\t Eg:./binary 123\n\n ");
        exit(EXIT_FAILURE);
    }
    if(argc > 2)    {
        printf("\n\tTOO MANY ARGUMENTS\n\n");
        exit(EXIT_FAILURE);
    }
    printf("VALUE:%d\n\n", my_atoi(argv[1]));
}
