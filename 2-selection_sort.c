#include "sort.h"

/**
* selection_sort -> sort array using selection sort
* @array: array to be sorted
* @size: size of the array
* Return: none
*/

void selection_sort(int *array, size_t size)
{
	unsigned int small, i, j;

	for (i = 0; i < size - 1; i++)
	{
		small = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small])
				small = j;
		}

		if (small != i)
		{
			int temp = array[i];

			array[i] = array[small];
			array[small] = temp;
			print_array(array, size);
		}
	}
}
