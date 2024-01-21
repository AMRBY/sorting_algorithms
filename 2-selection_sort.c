#include "sort.h"
/**
* selection_sort - sorting array
* Description: it's a selection sort
* @array: listint_t
* @size: size
* return: list
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	int low;

	if (array == NULL || size < 2)
		return;
	for (j = 0; j < size - 1; j++)
	{
		low = array[j];
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < low)
			{
				low = array[i];
				tmp = i;
			}
		}
		if (low != array[j])
		{
			array[tmp] = array[j];
			array[j] = low;
			print_array(array, size);
		}
	}
}
