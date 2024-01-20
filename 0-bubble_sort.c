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
	int swap = 1, c = 0;
	size_t j = 0;

	while (swap == 1)
	{
		swap = 0;
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				c = array[j];
				array[j] = array[j + 1];
				array[j + 1] = c;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
