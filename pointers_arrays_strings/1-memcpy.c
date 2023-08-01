#include "main.h"
#include <stdio.h>

/**
 * _memcpy - check the code
 * @dest: the location to copy to
 * @src: the bytes to be copied
 * @n: num of bytes to copy
 *
 * Return: pointer to the beginning of the affected mem area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count = count + 1;
	}

	return (dest);
}
