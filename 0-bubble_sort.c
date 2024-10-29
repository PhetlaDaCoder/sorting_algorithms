#include "sort.h"

/**
 * swap_inte - Swaps two integers.
 * @i: First integer to swap.
 * @j: Second integer to swap.
 */
void swap_inte(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: The array to be sorted.
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_inte(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
