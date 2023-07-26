#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - check the code
 * @num: the number passed in
 *
 * Return: Absolute value of num last digit.
 */
int print_last_digit(int num)
{
	char final = abs(num % 10);

	_putchar(final + 48);
	return (final);

}
