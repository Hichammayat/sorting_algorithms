#include "sort.h"

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
	int tmp;
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
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				bubbled = false;
			}
		}
		lenth--;
	}
}
