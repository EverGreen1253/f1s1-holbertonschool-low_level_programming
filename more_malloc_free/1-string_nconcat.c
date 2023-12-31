#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: first string
 * @s2: second string
 * @n: length of 2nd string to concat
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size;
	char *s;

	if (s1 != NULL)
		while (s1[i] != '\0')
		{
			i = i + 1;
		}
	if (s2 != NULL)
		while (s2[j] != '\0')
		{
			j = j + 1;
		}

	size = i + n + 1;

	s = calloc(size, 1);
	if (s == NULL)
		return (NULL);

	i = j = 0;
	if (s1 != NULL)
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i = i + 1;
		}
	if (s2 != NULL)
		while (j < n)
		{
			s[j + i] = s2[j];
			j = j + 1;
		}

	s[size - 1] = '\0';
	return (s);
}
