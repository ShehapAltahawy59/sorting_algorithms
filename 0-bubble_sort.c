#include "sort.h"
/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
    int swap;
    size_t i,j;
    
    if (array == NULL || size < 2)
        return;
    for(i =0 ,i<size-1,i++)
    {
    for (j =0, j < len-i-1 , j++)
    {
        
        if(array[i]>array[i+1])
        {
            swap = array[i]
            array[i]=array[i+1];
            array[i+1]=swap;
            print_array(array, size);
        }
        
        
    }
    }
    
}