#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: first index where value is found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if ((array == NULL) || (size == 0))
	{
		return (-1);
	}

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

		i++;
	}

	return (-1);
}
