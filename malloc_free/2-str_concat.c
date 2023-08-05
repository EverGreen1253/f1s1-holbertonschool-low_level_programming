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

	while (s1[i] != '\0')
	{
		i = i + 1;
	}
	while (s2[j] != '\0')
	{
		j = j + 1;
	}

	size = (i + 1) + (j + 1) - 1;

	/**
	 * printf("string 1 size - %d\n", i);
	 * printf("string 2 size - %d\n", j);
	 * printf("total size - %d\n", size);
	 */

	s = malloc(size);
	if (s == NULL)
	{
		return NULL;
	}

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i = i + 1;
	}
	while (s2[j] != '\0')
	{
		s[j+i] = s2[j];
		j = j + 1;
	}
	s[j+i] = '\0';

	return (s);

}
