#include "main.h"

/**
 * _strncat - check the code
 * @dest: string to be appended to
 * @src: source string to get append text from
 * @n: length to be appended
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int startpos;

	while (dest[count] != '\0')
	{
		count = count + 1;
	}

	startpos = count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[startpos + count] = src[count];
		count = count + 1;
	}

	dest[startpos + count] = '\0';

	return (dest);
}
