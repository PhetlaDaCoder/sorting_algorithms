#include "sort.h"

/**
 * swap_inte - Swaps two integers in an array.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */
void swap_inte(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts array of integers in ascending order
 * using the selection sort algorithm.
 * @array: An array of integers.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_inte(array + i, min);
			print_array(array, size);
		}
	}
}

