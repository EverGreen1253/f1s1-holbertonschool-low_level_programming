#include "main.h"

/**
 * _puts - check the code
 * @str: pointer to the string to be printed
 *
 * Return: prints the string pointed to
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count = count + 1;
	}
	_putchar('\n');
}
