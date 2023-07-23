#include "sort.h"
#include <stdio.h>

/**
 * swap -> swaps two integers
 * @x: array to be sorted
 * @y: size of the array
 * Return: none
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * startProcess -> make bubble sort process
 * @arr: array to process
 * @size: size of the array
 * Return: None
 */

void startProcess(int *arr, size_t size)
{
	size_t i = 0;

	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			swap(arr + i, arr + i + 1);
			print_array(arr, size);
		}
		i++;
	}
}

/**
 * bubble_sort -> return sorted array
 * @array: array of numbers
 * @size: size of the array
 * Return: None
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;

	while (i < size)
	{
		startProcess(array, size);
		i++;
	}
}
