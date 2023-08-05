#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - check the code
 * @size: size of array
 * @c: char to load into memory
 *
 * Return: pointer.
 */
char *create_array(unsigned int size, char c)
{

	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;

		i = i + 1;
	}

	return (s);
}
