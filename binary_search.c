#include<stdio.h>
#include<stdlib.h>
void binary_search(int array[], int search_num, int arr_size) {
 
    int i = 0, key = 0 , start = 0, end = 0, n = 0;
    key = search_num;
    n = arr_size/2;
    if(key > array[n])  {
        start = n+1;
        end = arr_size;
        for(i = start; i < end - 1; i++)
            if(array[i] == key)   {
                printf("Found %d in pos %d", key, i+1);
                exit(1);
            }
    }
    else if(key < array[n]) {
        start = 0;
        end = n-1;
        for(i = start; i < end; i++)
            if(array[i] == key)   {
                printf("Found %d in pos %d", key, i+1);
                exit(1);
            }
    }
            else  
            {
                key == array[n];
                printf("Found %d in pos %d", key, i+1);
                exit(1);
            }
            printf("search element not found in array\n");
}
           

void main()  {

    int num = 0, temp = 0, array[1000], search_num = 0, i = 0;
    int j = 0;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    
    printf("Enter Elements to array\n");
    for(i = 0; i < num; i++)  
        scanf("%d",&array[i]);

    printf("Entered array\n");
    for(i = 0; i < num; i++)  
        printf("%d\n",array[i]);
   for( j = 0; j < num - 1; j++)    {
    for(i = 0; i < num - 1; i++)    
        if(array[i] > array[i+1])   {
            temp = array[i+1];
            array[i+1] = array[i];
            array[i] = temp;
        }
   }

    printf("Sorted array\n");
    for(i = 0; i < num; i++)    
        printf("%d\n",array[i]);
    

    printf("Enter the search number \n");
    scanf("%d",&search_num);
    binary_search(array, search_num, num);

}
