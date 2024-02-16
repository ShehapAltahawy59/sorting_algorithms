#include "sort.h"
/**
 * selection_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int swap;
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size ; i++)
	{
		for (j = i; j < size; j++)
		{
			if (array[i] > array[j])
			{
				swap = array[i];
				array[i] = array[j];
				array[j] = swap;
				print_array(array, size);
			}
		}
	}
}
