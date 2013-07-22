#include <stdio.h>
#include <stdlib.h>
struct NODE {
    int item;
    struct NODE *next;
}*head = NULL, *tail = NULL;


struct NODE *allocate_memory()  {
        struct NODE *alloc = NULL;
            alloc = malloc(sizeof(struct NODE));
                return alloc;
}

void InsertFront()  {
    int value = 0;
    struct NODE *new = NULL;
    printf("ENTER VALUE TO BE INSERTED:");
    scanf("%d", &value);
    new = allocate_memory();
    if(head == NULL)   {
        new->next = NULL;
        new->item = value;
        tail = head = new;
    }
    else    {
        if(head->next == NULL)
            head->next = new;
        new->item = value;
        new->next = head;
        tail->next = new;
        tail = new;
    }
}

void InsertEnd()    {
    
    int value = 0;
    struct NODE *new = NULL;
    printf("ENTER VALUE TO BE INSERTED:");
    scanf("%d", &value);
    new = allocate_memory();
    if(head == NULL)   {
        new->next = NULL;
        new->item = value;
        tail = head = new;
    }
    else    {
        if(tail->next == NULL)
            tail->next = new;
        new->item = value;
        new->next = tail;
        head->next = new;
        head = new;
    }
}
void InsertMid()    {
    
    struct NODE *temp = NULL, *new = NULL;
    int value = 0, pos = 0, count = 1, i = 0;
       if(head == NULL)   {
        printf("\nLinked list empty\n");
        exit(0);
    }
    temp = head;
    while(temp->next != tail )   {
        temp = temp->next;
        count++;
    }
    temp = head;
        printf("\nEnter data to be inserted:");
    scanf("%d", &value);
    printf("\nEnter postion to insert data from 1 - %d:",count);
    scanf("%d", &pos);
    if(pos > count) {
        printf("\nCant insert in the position");
        exit(0);
    }
    for(i = 0; i < pos - 1; i++)
        temp = temp->next;
    new = allocate_memory();
    new->item = value;
    new->next = temp->next;
    temp->next = new;
}


void Display()  {
    struct NODE *temp = NULL;
    int i = 0;
    if(head == NULL){
        printf("NO ELEMENTS ARE INSERTED\n");
        exit(0);
    }
    temp = head;
    while(temp->next!= head)
    {
        printf("%d\t", temp->item);
        temp = temp->next;
    }
    for(i = 0; i < 2; i++)  {
        printf("%d\t", temp->item);
        temp = temp->next;
    }
    printf("\n");

}

int main()  {
    int option = 0;
    while(1)    {

        printf("\t 1:INSERT FRONT IN NODE \n\t 2:INSERT END IN NODE \n\t 3:INSERT IN MID \n\t 4:DISPLAY \n");
        printf("ENTER THE OPTIONS:");
        scanf("%d", &option);
        switch(option)  {
            case 1: InsertFront();
                    break;
            case 2: InsertEnd();
                    break;
            case 3: InsertMid();
                    break;
            case 4: Display();
                    break;
        }
    }
}
