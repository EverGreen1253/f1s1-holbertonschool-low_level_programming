#include "main.h"

/**
 * print_sign - checks if passed in value is +ve or -ve.
 * @c: the int to evaluate
 *
 * Return: 1, 0, -1 depending on situation.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
