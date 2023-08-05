#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int size;
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
	size = (i + 1) + (j + 1) - 1;
	s = malloc(size);
	if (s == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i = i + 1;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			s[j + i] = s2[j];
			j = j + 1;
		}
	}
	s[(i + 1) + (j + 1) - 1] = '\0';
	return (s);
}
