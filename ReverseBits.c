#include <stdio.h>

int ReverseBits(int value)   {
    int swap = 0;
   
    printf("%d\n", ((value >> 3) & 0x4));
    printf("%d\n", ((value << 3) & 0x8));
    printf("%d\n", ((value >> 1) & 0x2));
    printf("%d\n", ((value << 1) & 0x4));
    //swap = (((value >> 3) & 1) || ((value << 3) & 8) || ((value >> 1) & 2) || ((value << 1) & 4));
    return swap;
}

int main()
{
    int value = 11;
    printf("Entered value:%d\n", value);
    printf("swap:%d\n",ReverseBits(value));

}
