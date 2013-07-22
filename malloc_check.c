#include <stdio.h>
#include <stdlib.h>
main()
{
    int *ptr = NULL;
    ptr = (int*)malloc(sizeof(int) * 7);
    printf("%d\n", *(ptr - 1));
}
