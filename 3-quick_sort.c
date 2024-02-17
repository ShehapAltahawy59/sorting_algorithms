#include "sort.h"

/**
 * swap - swaps two integers in an array
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap(int *a, int *b)
{	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Lomuto partition scheme
 * @array: array to sort
 * @low: low index
 * @high: high index
 * @size: size of the array
 * Return: index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, j;
	int i;

	pivot = array[high];
	i = (low - 1);
	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	if (i + 1 != high)
	print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_helper - sorts an array of integers in ascending order
 * @array: array to sort
 * @low: low index
 * @high: high index
 * @size: size of the array
 */
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quick_sort_helper(array, low, pi - 1, size);
		quick_sort_helper(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}
