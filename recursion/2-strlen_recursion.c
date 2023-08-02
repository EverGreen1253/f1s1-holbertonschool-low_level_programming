#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: pointer to the string
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int total = 1;

	if (*s != '\0')
	{
		total = total + _strlen_recursion(s + 1);
	}
	else
	{
		return (total - 1);
	}
	return (total);
}
