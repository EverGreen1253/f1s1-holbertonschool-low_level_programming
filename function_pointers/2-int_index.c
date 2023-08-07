#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check the code
 * @array: the array passed in
 * @size: the size of the array passed in
 * @cmp: function to run on the array passed in
 *
 * Return: index where the wanted int is located in the array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i = i + 1;
	}

	return (-1);
}

