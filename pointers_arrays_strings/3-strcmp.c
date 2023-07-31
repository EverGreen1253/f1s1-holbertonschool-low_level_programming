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
	int s1total = 0;
	int s2total = 0;

	while (s1[count] != '\0')
	{
		s1total = s1total + s1[count];
		count = count + 1;
	}

	count = 0;

	while (s2[count] != '\0')
	{
		s2total = s2total + s2[count];
		count = count + 1;
	}

	return (s1total - s2total);
}
