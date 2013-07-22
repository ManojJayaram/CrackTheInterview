#include<stdio.h>
void selection_sort(int array[], int num); 

void main()
{
    int num = 0, i = 0, array[1000];

    printf("Enter the number of elements\n");
    scanf("%d",&num);

    printf("Enter Elements to array\n");
    for(i = 0; i < num; i++)
        scanf("%d",&array[i]);

    printf("Entered array\n");

    for(i = 0; i < num; i++)
        printf("%d\n",array[i]);

    selection_sort(array, num);
}


void selection_sort(int array[], int num) 
{
    int i = 0, j = 0, pos = 0, temp = 0;
    for(i = 0; i < num; i++)
    {
        pos = i;
        for( j = i+1; j < num; j++)
        {
            if(array[pos] > array[j])
                pos = j;
        }
        temp = array[i];
        array[i] = array[pos];
        array[pos] = temp;
    }
    printf("Sorted Array \n");
    for(i = 0; i < num; i++)
        printf("%d\n",array[i]);
}

void insertion_sort(int array[], int num)
{
    int i = 0, j = 0, temp = 0;
    for(i = 0; i < num; i++)
    {
        pos = i;
        for(j = j+1; j < num; j++)
        {
            if(array[pos] > array[j])
            {
                temp = array[pos];
                array[j] = temp;
            }
        }
    }
}


    
        


    
