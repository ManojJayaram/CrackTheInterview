#include <stdio.h>
#include <stdlib.h>
main()
{
    printf("int:%d \n float:%d\n long:%d\n double:%d\n short:%d\n", sizeof(int), sizeof(float), sizeof(long), sizeof(double), sizeof(short));

}
#if 0
main()
{
    unsigned int a = -6;
    int b = -20;
    printf("%d\n", a);

}
main()
{
    char *ptr;
    if ((ptr = (char *)malloc(0)) == NULL)
        printf("got valid pointer\n");
        else
            printf("got invalid pointer\n");


}
int func()
{
    printf("Hello \n");
    printf("bye \n");
    return 12;
}
main()
{
    printf("%d\n", sizeof(func));
}
main()
{
    int i;
    for( i = 10; i <= 10; i--)
        printf("%d\n", i);

}
main()
{
    int value  = 6;
    int check1 = value << 2;
    int check2 =  value >> 3;
    printf("check1:%d\n", check1);
    printf("check2:%d\n", check2);
    printf("value:%d\n", value);

}

int main()
{
    struct value{
        int bit1 : 1;
        int bit3 : 8;
        int bit4 : 8;
    }bit={1,2,2};
    printf("%d %d %d\n",bit.bit1,bit.bit3,bit.bit4);
    return 0;
}
main(){ 
    union d{ 
        unsigned int a:1; 
        unsigned int b:3; 
        unsigned c:2;}; 
        union d aa; 
        aa.b=6;aa.c=2;aa.a=1; 
        printf("%d %d %d",aa.a,aa.b,aa.c);
        }
unsigned int first_highest_bit_set(unsigned int num)
{
    unsigned int count = 0;

    while(num) {
        count++;
        if(num&(1<<31) == 1)
            break;
        num = num << 1;
    }

    return count; 
}
main()
{
    printf("%d\n", first_highest_bit_set(8));
}
#endif
