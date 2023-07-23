#include "sort.h"

/**
 * partition - make array partition
 * @array: array to sort
 * @first: low position/first element to start with
 * @last: high position/last element to end with
 * @size: size of the array
 * Return: index of the pivot
 */

int partition(int *array, int first, int last, size_t size)
{
	int i = first - 1, temp, j;

	for (j = first; j < last; j++)
	{
		if (array[j] < array[last])
		{
			i++;
			if (i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] > array[last])
	{
		temp = array[i + 1];
		array[i + 1] = array[last];
		array[last] = temp;
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * recursice_quick - sorts an array of integers recursively
 * @array: array to sort
 * @first: first position
 * @last: last position
 * @size: array size
 */
void recursice_quick(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		recursice_quick(array, first, pivot - 1, size);
		recursice_quick(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array of integers by using quick algorithm
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	recursice_quick(array, 0, size - 1, size);
}
