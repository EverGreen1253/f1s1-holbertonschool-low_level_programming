#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 * @s: pointer to string to be scanned
 * @accept: chars to scan for
 *
 * Return: pointer to the location where the first matched character is.
 */
char *_strpbrk(char *s, char *accept)
{
	int count = 0;
	int comparecount = 0;

	while (s[count] != '\0')
	{
		while (accept[comparecount] != '\0')
		{
			/*
			 * Something found!
			 */
			if (s[count] == accept[comparecount])
			{
				return (s + count);
			}
			comparecount = comparecount + 1;
		}

		count = count + 1;
		comparecount = 0;
	}

	return (NULL);
}
