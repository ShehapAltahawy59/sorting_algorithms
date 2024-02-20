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
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1 ; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (*min > array[j])
			{
				min = array + j;
			}
		}
		if (min != array + i)
		{
			swap = array[i];
			array[i] = *min;
			*min = swap;
			print_array(array, size);
		}
	}
}
