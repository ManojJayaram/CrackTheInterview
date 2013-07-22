#include <stdio.h>
#define sizeof(a) ((char *)(&a+1)-(char *)&a)
main()
{
    printf("%d\n", sizeof(2));

}
