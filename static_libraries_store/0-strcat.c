#include "main.h"

/**
 * _strcat - check the code
 * @dest: string to be appended to
 * @src: source string to get append text from
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int startpos;

	while (dest[count] != '\0')
	{
		count = count + 1;
	}

	startpos = count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[startpos + count] = src[count];
		count = count + 1;
	}
	dest[startpos + count] = '\0';

	return (dest);
}
