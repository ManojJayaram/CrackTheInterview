#include<stdio.h>

void sequential_search(int array[], int search_num, int arr_size) {
    int i = 0, temp = 0;
    temp = search_num;
    for(i = 0; i < arr_size; i++)   {
        if(array[i] == search_num)  {
            printf("Number %d found in position %d \n",search_num, i+1);
            exit(1);
        }
    }
    printf("Search Element %d not found in array\n", search_num);
}
            

void main()  {

    int num = 0, array[1000], search_num = 0, i = 0;
    
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    
    printf("Enter Elements to array\n");
    for(i = 0; i < num; i++)  
        scanf("%d",&array[i]);

    printf("Entered Elements\n");
    for(i = 0; i < num; i++)  
        printf("%d\n",array[i]);

    printf("Enter the search number \n");
    scanf("%d",&search_num);
    sequential_search(array, search_num, num);

}
