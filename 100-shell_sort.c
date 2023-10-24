#include "sort.h"

/**
 * swap_ele - Swap two values in an array.
 * @val1: The first integer to swap.
 * @val2: The second integer to swap.
 */
void swap_ele(int *val1, int *val2)
{
	int tmp;

	tmp = *val1;
	*val1 = *val2;
	*val2 = tmp;
}

/**
 * shell_sort - Sort an array using the shell sort algo
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (!array || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ele(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
