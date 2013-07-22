#include <stdio.h>
int my_atoi(char *str)  {
    int value = 0;
    while((*str >= '0') && (*str <= '9'))   {    
        value = (value * 10) + (*str - '0');
        str++;
    }
    return value;
}
int main()
{
    char *ptr = "123";
    printf("%d\n",my_atoi(ptr)); 

}
