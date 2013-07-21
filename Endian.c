#include <stdio.h>
/* Endian Conversion for 16 bit */
int L2BEndian(int num) {
    int value;
    value = (((num >> 24) & 0xff) | ((num << 24) & 0xff000000) | ((num >> 8) & 0xff00) | ((num << 8) & 0x00ff0000));
    return value;
}

/* Endian Conversion for 8 bit */
int L2BEndian(int num) {
    int value;
    value = (((num >> 8) & 0xff) | ((num << 8) & 0xff00));
    return value;
}


int main(int argc, char **argv) {
    
    int value = 1;
    char *ptr;
    /* To check the Endianess of the system */
    if((char*)&value)   
        printf("\nLittle Endian\n");
    else
        printf("\nBig Endian\n");
    
}
