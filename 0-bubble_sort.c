#include "sort.h"

/**
 * swap_ele - Swap two values in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ele(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array with bubble sort algorithme.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, lenth = size;
	bool bubbled = false;

	if (array == NULL || size < 2)
		return;

	while (bubbled == false)
	{
		bubbled = true;
		for (i = 0; i < lenth - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ele(array + i, array + i + 1);
				print_array(array, size);
				bubbled = false;
			}
		}
		lenth--;
	}
}
