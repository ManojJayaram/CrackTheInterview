#include <stdio.h>
int main()
{
    char num = 0x34, temp1;
    temp1 = num & 0xf0;
    temp1 = temp1 >> 4;
    num = (num & 0x0f) << 4;
    num = num | temp1;
    printf("%c\n", num);

}
