#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 * @s: pointer to string to be scanned
 * @accept: chars to scan for
 *
 * Return: length of consecutive spots corresponding to searched-for chars.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int found = 0;
	int count = 0;
	int comparecount = 0;
	int comparestop = 0;

	while (s[count] != '\0')
	{
		while ((accept[comparecount] != '\0') && (comparestop == 0))
		{
			/*
			 * Something found!
			 */
			if (s[count] == accept[comparecount])
			{
				found = found + 1;
				comparestop = 1;
			}
			comparecount = comparecount + 1;
		}

		/*
		 * Ran the comparison loop and didn't find anything
		 */
		if (comparestop == 0)
		{
			return (found);
		}

		count = count + 1;
		comparecount = 0;
		comparestop = 0;
	}

	return (found);
}
