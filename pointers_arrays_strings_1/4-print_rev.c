#include "main.h"

/**
 * print_rev - check the code
 * @s: pointer to the string to reverse
 *
 * Return: reverses the string passed in.
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count = count + 1;
	}

	while (count > 0)
	{
		count = count - 1;
		_putchar(s[count]);
	}
	_putchar('\n');
}
