#include "main.h"

/**
 * _strcmp - check the code
 * @s1: first string
 * @s2: second string
 *
 * Return: comparison int result.
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int cmp;

	while (s1[count] != '\0')
	{
		cmp = s1[count] - s2[count];
		if (cmp != 0)
		{
			return (cmp);
		}

		count = count + 1;
	}

	/*
	 * at this point s1 should have ended
	 * if the program hasn't ended and s2 is ongoing, then it wins.
	 */

	if (s2[count] != '\0')
	{
		return (s2[count]);
	}

	return (0);
}
