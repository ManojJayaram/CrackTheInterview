#include <stdio.h>
#include <stdlib.h>
void RemoveDuplicate(int *duplicate, int num_element)
{
    int i = 0, j = 0, temp = 0;
    for(i = 0; i < num_element - 1; i++)
    {
        if(*(duplicate + i) == *(duplicate + i + 1))
            for(j = i + 1; j < num_element-i-1; j++)
                *(duplicate + j + 1) = *(duplicate + j + 2); 
    }
}
void bubble_sort(int *sort, int num_element)
{
    int i = 0, j = 0, temp = 0;
    for(i = 0; i < num_element - 1; i++)
    {
        for(j = 0; j < num_element-i-1; j++)
        {
            if(*(sort + j) > *(sort + j + 1))
            {
                temp = *(sort + j + 1);
                *(sort + j + 1) = *(sort + j);
                *(sort + j) = temp;
            }
        }
    }
    RemoveDuplicate(sort, num_element);
}
int main()
{
    int *array = NULL, num_element = 0;
    int i = 0;
    printf("Enter the Number of elements in array\n");
    scanf("%d", &num_element);
    array = (int*)malloc(sizeof(int) * num_element);
    printf("Enter array elements\n");
    for(i = 0; i < num_element; i++)
        scanf("%d",(array + i));
    bubble_sort(array, num_element);
}
