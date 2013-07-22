#include <stdio.h>

/* If system is 32 bits */
int endianess_conversion_32bit(int value)
{
    int swap = 0;
    swap = (((value >> 24) & 0xff)| //move byte 3 to 0
            ((value << 24) & 0xff000000)| // move byte 0 to 3
            ((value >> 8) & 0xff00) | //move byte 2 to 1
            ((value << 8) & 0xff0000)); // move byte 1 to 2
    return swap;
}
/* If system is 16 bits */
int endianess_conversion_16bit(int value)
{
    int swap = 0;
    swap = (((value >> 8) & 0xff) | ((value << 8) & 0xff00)); 
    return swap;
}
main()
{
    int x = 0xdeadbeef;
    /* To check if the Sytem is little endian r big endian */
#if 0
    int x = 1;
    if(*(char *)&x == 1)
        printf("Little Endian\n");
        else
        printf("Big Endian\n");
#endif
        printf("value: %x\n", endianess_conversion_32bit(x));
       // printf("value: %x\n", endianess_conversion_16bit(x));
}
