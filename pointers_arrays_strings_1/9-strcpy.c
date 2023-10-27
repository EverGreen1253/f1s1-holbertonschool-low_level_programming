#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code
 * @dest: string to be copied to
 * @src: string to copy from
 *
 * Return: pointer location of dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];

		count = count + 1;
	}
	dest[count] = src[count];

	return (dest);
}
