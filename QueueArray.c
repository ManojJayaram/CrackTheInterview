#include <stdio.h>
#include <stdlib.h>
#define MAX_Q_LENGTH 10

int queue[MAX_Q_LENGTH];
int rear = -1, front = -1;

void QueuePush()    {
    int value = 0;
    if(rear == MAX_Q_LENGTH)    {
        printf("\nQ overflow");
        exit(EXIT_FAILURE);
    }
    ++rear;
    if(0 == rear)
        front++;
    printf("\nEnter value to Q:");
    scanf("%d", &value);
    queue[rear] = value;
}

void QueueDelete()  {

        

}

