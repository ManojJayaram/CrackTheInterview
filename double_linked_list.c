#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <time.h>
struct NODE {
    int data;
    struct NODE *next;
    struct NODE *previous;
}*head = NULL, *last = NULL;

struct NODE *memory_allocate()
{
    struct NODE *temp = NULL;
    if(((temp = (struct NODE * )malloc(sizeof(struct NODE))) == NULL))
        perror("Malloc\n");
    return temp;

}

struct NODE *InsertNext()   {
    int value = 0;
    struct NODE *new = NULL; 
    new = memory_allocate();
    printf("\nEnter data to insert:");
    scanf("%d", &value);
    if(head == NULL)   {
        new->data = value;
        new->next = NULL;
        new->previous = NULL;
        head = last = new;
    }
    else    {
        new->data = value;
        last->next = new;
        new->previous = last;
        new->next = NULL;
        last = last->next;
    }
}

struct NODE *InsertPrevious()  {
    int value = 0;
    struct NODE *new = NULL; 
    new = memory_allocate();
    printf("\nEnter data to insert:");
    scanf("%d", &value);
    if(head == NULL)   {
        new->data = value;
        new->next = NULL;
        new->previous = NULL;
        head = last = new;
    }
    else    {
        new->data = value;
        last->previous = new;
        new->next = last;
        new->previous = NULL;
        last = last->previous;
    }
}

void InsertPos() {

    struct NODE *temp = NULL, *new = NULL;
    int value = 0, pos = 0, count = 1, i = 0;
    
    if(head == NULL)   {
        printf("\nLinked list empty\n");
        exit(0);
    }
    temp = head;
    while(temp->next != NULL)   {
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
    for(i = 0; i < pos; i++)
        temp = temp->next;
    new = memory_allocate();
    new->data = value;
    new->previous = temp;
    temp = temp->next;
    new->next = temp;
    temp->previous = new;
    temp = new->previous;
    temp->next = new;
}

void DeleteNodePos()    {
    struct NODE *temp = 0, *prev_node = NULL, *futu_node = NULL;
    int count = 1, pos = 0, i = 0;
    if(head == NULL)    {
        printf("List is empty\n");
        exit(0);
    }
    temp = head;
    while(temp->next != NULL)   {
        count++;
        temp = temp->next;
    }
    temp = head;
    printf("\nYou can delete node in position from 1 - %d\n", count);
    printf("Enter the position:");
    scanf("%d", &pos);
    if(pos > count || pos < 0)
        exit(0);
    else    {
        for(i = 0; i < pos - 1; i++)
            temp = temp->next;
        if(temp->next == NULL)  {
            prev_node = temp->previous;
            prev_node->next = NULL;
            free(temp);
        }
        else
        {
            prev_node = temp->previous;
            futu_node = temp->next;
            prev_node->next = futu_node;
            futu_node->previous = prev_node;
            free(temp);
        }
    }
}

void Display()  {
    struct NODE *disp = NULL;
    if(head == NULL)    {
        printf("List is empty\n");
        exit(0);
    }
    disp = head;
    printf("\nNext printing\n");
    while(disp->next != NULL)   {
        printf("%d -->", disp->data);
        disp = disp->next;
        if(disp->next == NULL)
            printf("%d", disp->data);
    }
    /*
    printf("\nprevious printing\n");
    while(disp->previous != NULL)   {
         printf("%d -->", disp->data);
         disp = disp->previous;
         if(disp->previous == NULL)
              printf("%d", disp->data);
    }
    */
    printf("\n");
}
void DeleteBasedOnData()    {
    int value = 0, found = 0;
    struct NODE *temp = NULL, *prev_node = NULL, *futu_node = NULL;
    if(head == NULL)    {
        printf("List is empty\n");
        exit(0);
    }
    temp = head;
    Display();
    printf("\nEnter the data that you want to delete:");
    scanf("%d", &value);
    while(temp->next)   {
        if(temp->data == value && temp->next != NULL && temp->previous != NULL) {
            found = 1;
            prev_node = temp->previous;
            futu_node = temp->next;
            prev_node->next = futu_node;
            futu_node->previous = prev_node;
            temp->next = NULL;
            temp->previous = NULL;
            free(temp);
            break;
        }
        if(temp->data == value && temp->next == NULL && temp->previous != NULL)   {
            found = 1;
            prev_node = temp->previous;
            prev_node->next = NULL;
            temp->next = NULL;
            temp->previous = NULL;
            free(temp);
            break;
        }
        if(temp->data == value && temp->next != NULL && temp->previous == NULL) {
            found = 1;
            futu_node = temp->next;
            futu_node->previous = NULL;
            futu_node->previous = NULL;
            head = futu_node;
            temp->next = NULL;
            free(temp);
            break;
        }
        if(temp->data == value && temp->next == NULL && temp->previous ==  NULL)  {
            found = 1;
            free(temp);

        }
        temp = temp->next;
    }
    if(0 == found)  
        printf("Element does not exist\n");
}



int main()  {
    int option = 0;
    clock_t time;
    double time_taken;

    printf("\n\t\t\t DOUBLE LINKED LIST \n");
    while(1)    {
        printf("\t 1:Insert Node front \n\t 2:Insert Node back \n\t 3:Insert in a Position \n\t 4:Display \n\t 5:Delete in a position \n\t 6:Delete based on data \n\t 7:Exit \n\t");
        printf(" ENTER OPTIONS:");
        scanf("%d", &option);
        switch(option)  {
            case 1: InsertNext();
                    break;
            case 2: InsertPrevious();
                    break;
            case 3: InsertPos();
                    break;
            case 4: Display();
                    break;
            case 5: DeleteNodePos();
                    break;
            case 6: DeleteBasedOnData();
                    break;
            case 7: exit(0);
                    break;
            default: exit(1);

        }
    }
}
