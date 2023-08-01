#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack: the string to search through
 * @needle: the exact string to match
 *
 * Return: pointer to substring location.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int match = 0;

	while (haystack[i] != '\0')
	{
		if (needle[0] == '\0')
		{
			return haystack;
		}

		if (haystack[i] == needle[0])
		{
			match = 1;
			while (match == 1 && needle[j] != '\0' && haystack[i + j] != '\0')
			{
				if (needle[j] != haystack[i + j])
				{
					match = 0;
				}
				j = j + 1;
			}

			/*
			 * comparison while loop finished without setting match to 0
			 */
			if (match == 1)
			{
				return (haystack + i);
			}
		}

		i = i + 1;
		j = 0;
	}

	return (NULL);
}
