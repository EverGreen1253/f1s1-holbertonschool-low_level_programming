#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - check the code
 * @min: min value
 * @max: max value
 *
 * Return: pointer to min-max array.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int size;
	int *s;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	s = malloc(size * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = min + i;
		i = i + 1;
	}

	return (s);
}
