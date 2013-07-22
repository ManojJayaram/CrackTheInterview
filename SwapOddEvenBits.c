#include <stdio.h>

int odd_even_swap(int value)
{
    int odd = 0, even = 0, swap_num = 0;
    odd = value >> 1;
    printf("Odd place number:%d\n", odd);
    even = value << 1;
    printf("Even place number:%d\n", even);
    swap_num = odd | even;
    printf("Odd and Even bit swapped number:%d\n", swap_num);
}

int main()
{
    int num = 0x234;
    odd_even_swap(num);
    return 0;
}
