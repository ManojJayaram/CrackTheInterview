#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define MAX_ELEMENT 2

static int top = -1;
int *ArrayStack = NULL;

int StackPush(int number)    {
    //If count == 0 then allocate the memory for the first  time for MAX_ELEMENT
    if(-1 == top)  {
        if( (ArrayStack = (int*) malloc(sizeof(int) * MAX_ELEMENT)) == NULL )    
            perror("malloc");
    }

    //Mean all elements of stack has been used and this is the new entry so realloc
    if(top == MAX_ELEMENT)  {
       if( (ArrayStack = (int*)realloc(ArrayStack, sizeof(int))) == NULL )
           perror("realloc");
    }

    top++;
    *(ArrayStack + top)  = number;
}

int StackPop()  {
    if(-1 == top)   {
        printf("ALL ELEMENTS POPPED OUT STACK EMPTY \n");
        exit(1);
    }
    printf("POPED OUT ELEMENT:%d\n", *(ArrayStack + top));
    top--;
}

void DisplayStack() {
    int i = 0;
    if(-1 == top)   {
        printf("STACK EMPTY \n");
        exit(1);
    }
    printf("CONTENTS OF STACK \n");
    for(i = 0; i <= top; i++)
        printf("STACK %d :%d\n", i, *(ArrayStack + i));
    printf("\n");
}

void DisplayMiddleOfStack() {
    int count = 0, i = 0;
    if(-1 == top)   {
        printf("STACK EMPTY \n");
        exit(1);
    }
    count = top/2;
    printf("MIDDLE ELEMENT OF STACK:%d\n", *(ArrayStack + count));
}

void ExitStack()    {
    free(ArrayStack);
    exit(0);
}
