#include "main.h"

/**
 * puts2 - check the code
 * @str: the string to skip characters
 *
 * Return: string with missing characters.
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}

		count = count + 1;
	}
	_putchar('\n');
}
