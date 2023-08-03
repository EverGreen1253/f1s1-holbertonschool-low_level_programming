#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 * @s: the string to be scanned
 * @c: the character to find
 *
 * Return: pointer to location of char in scanned string.
 */
char *_strchr(char *s, char c)
{
	int count = 0;
	int found = 0;

	while ((s[count] != '\0') && (found == 0))
	{
		if (s[count] == c)
		{
			found = 1;
			return (s + count);
		}
		count = count + 1;
	}

	if (c == '\0')
	{
		return (s + count);
	}
	else
	{
		return (NULL);
	}
}
