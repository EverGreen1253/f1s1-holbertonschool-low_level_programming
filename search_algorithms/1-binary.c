#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - the search
 * @array: the array
 * @size: the size
 * @value: the value to look for
 *
 * Return: first index where value is found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int start, stop, pivot;

	start = 0;
	stop = (int)size - 1;

	if ((array == NULL) || (size <= 1))
	{
		return (-1);
	}

	if (size == 1)
	{
		return (0);
	}

	while (start <= stop)
	{
		print_array(array, start, stop);

		pivot = start + (stop - start) / 2;

		if (array[pivot] == value)
			return (pivot);

		if (array[pivot] < value)
			start = pivot + 1;
		else
			stop = pivot - 1;
	}

	return (-1);
}

/**
 * print_array - the array
 * @array: the array
 * @start: index to start from
 * @stop: index to stop at
 *
 * Return: nothing
 */
void print_array(int *array, int start, int stop)
{
	int i = start;

	printf("Searching in array:");
	while (i <= stop)
	{
		printf(" %d", array[i]);
		i++;

		if (i <= stop)
		{
			printf(",");
		}
	}
	printf("\n");
}

