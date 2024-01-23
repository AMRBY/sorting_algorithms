#include "sort.h"
/**
* first - sorting array
* Description: it's quick sort
* @array: listint_t
* @size: size
* @i: i
* @piv: pivot
* return: array
*/
size_t first(int *array, size_t size, size_t i, size_t piv)
{
	size_t j, tmp;

		j = i;
		while (j < piv)
		{
			if (array[j] < array[piv])
			{
				if (i < j)
				{
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;
					print_array(array, size);
				}
				i++;
			}
			j++;
		}
		if (array[i] > array[piv])
		{
			tmp = array[i];
			array[i] = array[piv];
			array[piv] = tmp;
			print_array(array, size);
		}

	return (i);
}
/**
* second - sorting array
* Description: it's quick sort
* @array: listint_t
* @size: size
* @i: int
* @piv: pivot
* return: array
*/
void second(int *array, size_t size, size_t i, size_t piv)
{
	size_t h;

	if (piv > i)
	{
		h = first(array, size, i, piv);
		second(array, size, 0, h - 1);
		second(array, size, h + 1, piv);
	}

}
/**
* quick_sort - sorting array
* Description: it's quick sort
* @array: listint_t
* @size: size
* return: array
*/
void quick_sort(int *array, size_t size)
{
	size_t i = 0, piv = size - 1;

	if (array == NULL || size < 2)
		return;

	second(array, size, i, piv);
}
