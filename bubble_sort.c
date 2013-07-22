#include<stdio.h>

void bubble_sort(int array[], int num)  {
    int i = 0, j = 0, temp = 0;

    for(i = 0; i < num-1; i++)
    {
        for(j = 0; j < num-i-1; j++) 
        {
            if(array[j] > array[j+1]) 
            {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }    
        }
    }
    printf("Sorted array:\n");
    for(i = 0; i < num; i++)
        printf("%d \n",array[i]);
}



void main() {

    int num = 0, i = 0, array[1000];

    printf("Enter the number of elements\n");
    scanf("%d",&num);

    printf("Enter Elements to array\n");
    for(i = 0; i < num; i++)
        scanf("%d",&array[i]);

    printf("Entered array\n");
    
    for(i = 0; i < num; i++)
        printf("%d\n",array[i]);

    bubble_sort(array, num);
}
    
