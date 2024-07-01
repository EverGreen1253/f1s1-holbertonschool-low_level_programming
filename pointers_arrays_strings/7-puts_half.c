#include "main.h"

/**
 * puts_half - check the code
 * @str: the string to be printed
 *
 * Return: 2nd half of passed-in string.
 */
void puts_half(char *str)
{
	int count = 0;
	int len;
	int startpos;

	while (str[count] != '\0')
	{
		count = count + 1;
	}

	if (count % 2 == 1)
	{
		len = (count - 1) / 2;
	}
	else
	{
		len = count / 2;
	}
	startpos = (count - 1) - len + 1;
	count = startpos;

	while (str[count] != '\0')
	{
		_putchar(str[count]);

		count = count + 1;
	}
	_putchar('\n');
}
