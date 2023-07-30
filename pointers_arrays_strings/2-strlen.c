#include "main.h"

/**
 * _strlen - check the code
 * @s: the pointer to the start of the string
 *
 * Return: length of the string passed in.
 */
int _strlen(char *s)
{
	int count = 0;

	while(s[count] != '\0')
	{
		count = count + 1;
	}
	return (count);
}
