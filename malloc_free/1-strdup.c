#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 * @str: the string passed in
 *
 * Return: pointer to first elem of dup string.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *s;

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	s = malloc(i - 1);

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		s[i] = str[i];

		i = i + 1;
	}

	return (s);
}
