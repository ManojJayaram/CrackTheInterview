#include <stdio.h>

int bit_set_position(int value)
{
    int count = 0;
    printf("Bits are set in positions:\n");
    while(value)
    {
        if(value & 0x1)
        {
            printf("%d\n", count); 
        }
        value = value >> 1;
        count++;
    }
}

int main()
{
    int num = 0x234;
    bit_set_position(num);
    return 0;
}
