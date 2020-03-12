#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int item;
    struct NODE *next;
}*first = NULL;

struct NODE *allocate_memory()  {
    struct NODE *alloc = NULL;
    alloc = malloc(sizeof(struct NODE));
    return alloc;
}

struct NODE *Insert_front() {
   
    int value = 0;
    struct NODE *new = NULL;
    printf("Enter the value to be inserted\n");
    scanf("%d", &value);
    new = allocate_memory();
    if(first == NULL)   {
        new->next = NULL;
        new->item = value;
        first = new;
    }
    else    {
        new->next = first;
        new->item = value;
        first = new;
    }
}

struct NODE *Delete_front() {
    
    struct NODE *temp = NULL;
    if(first == NULL)    {
        printf("NO NODE TO DELETE\n");
        exit(0);
    }
    temp = first;
    first = first->next;
    temp->next = NULL;
    free(temp);
}

struct NODE *Insert_rear()  {
   
    int value = 0;
    struct NODE *new = NULL, *temp = NULL;
    printf("Enter the value to be inserted\n");
    scanf("%d", &value);
    new = allocate_memory();
    if(first == NULL)    {
        new->next = NULL;
        new->item = value;
        first = new;
    }
    else    {
        temp = first;
        while(temp->next != NULL)
            temp = temp -> next;
        new->item = value;
        new->next = NULL;
        temp->next = new;
    }
}

struct NODE *Delete_rear()  {

    struct NODE *temp = NULL, *prev = NULL;
    if(first == NULL){
        printf("NO NODE TO DELETE IN REAR\n");
        exit(0);
    }
    temp = first;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}


struct NODE *Reverse_list() {
    
    struct NODE *prev = NULL, *curr = NULL, *future = NULL;
    if(first == NULL){
        printf("LIST DOES NOT EXIST\n");
        exit(0);
    }
    prev = first;
    if(prev->next == NULL){
        printf("ONLY ONE NODE IS PRESENT SO CANT REVERSE\n");
        exit(0);
    }
    curr = prev->next;
    prev->next = NULL ;
    while(curr->next != NULL){
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;
    }
    curr->next = prev;
    first = curr;
}

int Middle_of_linkedlist(){

    struct NODE *slow_ptr = NULL, *fast_ptr = NULL;
    if(first == NULL){
        printf("LIST DOES NOT EXIST\n");
        exit(0);
    }
    slow_ptr = fast_ptr = first;
    while(fast_ptr->next != NULL){
        slow_ptr = slow_ptr->next;
        if(fast_ptr->next->next == NULL)
            break;
        fast_ptr = fast_ptr->next->next;
        }
        printf("THE MIDDLE OF LINKED LIST IS:%d\n", slow_ptr->item);
}

void Display() {
    
    struct NODE *temp = NULL;
    if(first == NULL){
        printf("NO ELEMENTS ARE INSERTED\n");
        exit(0);
    }
    temp = first;
    while(temp->next != NULL)
    {
        printf("%d -->", temp->item);
        temp = temp->next;
        if(temp->next == NULL)
            printf("%d", temp->item);
    }
    printf("\n");
}

int sort_list(){
   
    struct NODE *ptr1 = NULL, *ptr2 = NULL;
    int node_count = 0, i = 0, j = 0, temp = 0;
    if(first == NULL){
        printf("NO ELEMENTS ARE INSERTED\n");
        exit(0);
    }
    ptr1 = first;
    while(ptr1->next!= NULL){
        node_count++;
        ptr1 = ptr1->next;
    }
    node_count = node_count + 1;
    ptr1 = ptr2 = first;
    ptr2 = ptr2->next;
    for(i = 0; i < node_count; i++)
    {
        for(j = 1; j < node_count; j++)
        {
            if((ptr1->item) > (ptr2->item))
            {
                temp = ptr1->item;
                ptr1->item = ptr2->item;
                ptr2->item = temp;
            }
            if(ptr2->next != NULL){
                ptr2 = ptr2->next;
            }
            else
                break;
        }
        if(ptr1->next != NULL){
            ptr1 = ptr1->next;
            if(ptr1->next != NULL)
                ptr2 = ptr1->next;
                else
                    break;
        }
        else
            break;
    }
    printf("LINK LIST IS SORTED \n");
}
void Remove_duplicate() {

    struct NODE *curr = NULL, *future = NULL, *temp = NULL;
    if(first == NULL)
    {
        printf("NO ELEMENTS ARE INSERTED\n");
        exit(0);
    }
    curr = first;
    while(curr->next != NULL)
    {
        future = curr->next;
        /* If the current node data and future node data is same 
           remove the future node (free future pointer), and make future pointer point to next node 
           before doing so check if it is NULL, then u need to stop right there
        */
        if(curr->item == future->item)
        {
            if(future->next != NULL)
            {   
                temp = future;
                future = future->next;
                curr->next = future;
                free(temp);
            }
            else
            {
                printf("REMOVED DUPLICATE \n");
                exit(0);
            }
        }
    }
}


/* NOT DONE STILL YET TO FINISH */
struct NODE *SwapAdjacent() {

    struct NODE *curr = NULL, *future = NULL;
    if(first == NULL)   {
        printf("No Node\n");
        exit(1);
    }

    curr = first;
    if(curr->next == NULL)
    {
        printf("Only One node exists so no swapping\n");
        exit(1);
    }
    while(curr->next != NULL)
    {
        future = curr->next;
        curr->next = future->next;
        future->next = curr;
        if(curr->next != NULL)
            curr = curr->next;
        else 
            break;
    }
}




int main()
{
    int option = 0;
    while(1)    {
        
        printf("\t 1:INSERT FRONT ON NODE \n\t 2:INSERT REAR OF NODE \n\t 3:DELETE FRONT OF A NODE \n\t 4:DELETE REAR OF A NODE \n\t 5:DISPLAY \n\t 6:REVERSE A LINKED LIST \n\t 7:FIND MIDDLE ELEMENT OF LINKED LIST\n\t 8:SORT LINKED LIST\n\t 9:REMOVE DUPLICATE FROM SORTED LINKED LIST\n\t 10:SWAP ADJACENT NODES\n\t *:PRESS ZERO TO EXIT\n");
        printf("ENTER THE OPTIONS\n");
        scanf("%d", &option);
        switch(option)  {
            case 1: Insert_front();
                break;
            case 2: Insert_rear();
                break;
            case 3: Delete_front();
                break;
            case 4: Delete_rear();
                break;
            case 5: Display();
                break;
            case 6: Reverse_list();
                break;
            case 7: Middle_of_linkedlist();
                break;
            case 8: sort_list();
                break;
            case 9: Remove_duplicate();
                break;
            case 10: SwapAdjacent();
                break;
            default: exit(0);
                break;
        }
    }
}


/**** Latest ***/

#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
	int data;
	struct node *next;
}NODE;

NODE *firstNode = NULL, *initialNode = NULL;

NODE *createMemoryForLinkedList(); 
void diplayLinkedList(NODE *dispNode);
void insertNodeAtStart();
void insertNodeAtEnd();
void deleteNodeAtStart();
void deleteNodeAtEnd();
void deleteNodeAtPos();
void countNode();
void insertInSortedList();
void checkListIsSorted();
void reverseList();


int main (int argc, char **argv)
{
	int option = 0;
	while (1)
	{
		printf("\n");
		printf("Enter 0: To quit\n");
		printf("Enter 1: Display\n");
		printf("Enter 2: Insert data to start of linked list\n");
		printf("Enter 3: Insert data to end of linked list\n");
		printf("Enter 4: Delete data from front of linked list\n");
		printf("Enter 5: Delete data from end of linked list\n");
		printf("Enter 6: Reverse linked list\n");
		printf("Enter 7: Insert data at entered position of linked list\n");
		printf("Enter 8: Delete data at entered position of linked list\n");
		printf("Enter 9: Count number of nodes\n");
		printf("Enter 10: Insert element in a sorted linked list \n");
		printf("Enter 11: Delete Node at a given position \n");
		printf("Enter 12: Check if linked list is sorted \n");

		scanf("%d", &option);

		switch (option)
		{
			case 0:
				exit(0);
				break;
			case 1:
				diplayLinkedList(firstNode);
				break;
			case 2:
				insertNodeAtStart();
				break;
			case 3:
				insertNodeAtEnd();
				break;
			case 4:
				deleteNodeAtStart();
				break;
			case 5:
				deleteNodeAtEnd();
				break;
			case 6:
				reverseList();
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				countNode();
				break;
			case 10:
				insertInSortedList();
				break;
			case 11:
				deleteNodeAtPos();
				break;
			case 12:
				checkListIsSorted();
				break;

		}
	}
}

NODE *createMemoryForLinkedList() 
{
	NODE *rNode;
	rNode = malloc (sizeof(NODE));
	if (NULL == rNode)
	{
		perror("Error:");
		exit(-1);
	}
	return rNode;
}

void diplayLinkedList(NODE *dispNode)
{
	if (dispNode == NULL)
	{
		printf("There are no elements in List\n");
		exit(-1);
	}
	while (dispNode != NULL)
	{
		printf("%d \t", dispNode->data);
		dispNode = dispNode->next;
	}
}

void insertNodeAtStart()
{
#if 0
	int num = 0;
	NODE *insStartNode;
	printf("Enter number to insert at start:\n");
	scanf("%d", &num);

	insStartNode = createMemoryForLinkedList();
	if (firstNode == NULL)
	{
		insStartNode->data = num;
		insStartNode->next = NULL;
		initialNode = insStartNode;
	}
	else
	{
		insStartNode->data = num;
		insStartNode->next = firstNode;
	}
	firstNode = insStartNode;
#endif
	int num[] = {5, 7, 8, 9, 10, 30 , 46, 47};
	NODE *insStartNode;
	for(int  i = 0; i < sizeof(num)/sizeof(int); i++)
	{
		insStartNode = createMemoryForLinkedList();
		if (firstNode == NULL)
		{
			insStartNode->data = num[i];
			insStartNode->next = NULL;
			initialNode = insStartNode;
		}
		else
		{
			insStartNode->data = num[i];
			insStartNode->next = firstNode;
		}
		firstNode = insStartNode;
	}
}

void insertNodeAtEnd()
{
	int num = 0;
	NODE *insEndNode;
	printf("Enter number to insert at End:\n");
	scanf("%d", &num);
	insEndNode = createMemoryForLinkedList();

	if (firstNode == NULL)
	{
		insEndNode->data = num;
		insEndNode->next = NULL;
	}
	else
	{
		insEndNode->data = num;
		insEndNode->next = NULL;
		initialNode->next = insEndNode;
		initialNode = insEndNode;
	}
}
void deleteNodeAtStart()
{
	NODE *delStartNode;
	if (firstNode == NULL)
	{
		printf("There are no elements in List\n");
		exit(-1);
	}
	delStartNode = firstNode;
	firstNode = firstNode->next;
	free(delStartNode);
}

void deleteNodeAtEnd()
{
	NODE *delEndNode;
	if (firstNode == NULL)
	{
		printf("There are no elements in List\n");
		exit(-1);
	}
	delEndNode = firstNode;
	while (delEndNode->next == initialNode)
	{
		delEndNode = delEndNode->next;
	}
	free(initialNode);
	initialNode = delEndNode;
	initialNode->next = NULL;
}
void countNode()
{



}



