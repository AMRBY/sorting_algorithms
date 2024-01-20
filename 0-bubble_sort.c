#include "sort.h"
/**
* bubble_sort - sorting array
* Description: it's a bubble sort
* @array: int
* @size: size_t
* return: array
*/
void bubble_sort(int *array, size_t size)
{
	int c = 0;
	size_t i = 0, j = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		c = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				c = array[j];
				array[j] = array[j + 1];
				array[j + 1] = c;
				print_array(array, size);
			}
		}
	}
}
