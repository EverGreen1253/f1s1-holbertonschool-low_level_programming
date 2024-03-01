#include "main.h"

/**
 * *string_toupper - check the code
 *@c: pointer to array first element
 *
 * Return: Always 0.
 */
char *string_toupper(char *c)
{
	int count = 0;
	int n;

	while (c[count] != '\0')
	{
		n = c[count];

		if (n >= 97 && n <= 122)
		{
			c[count] = n - 32;
		}

		count = count + 1;
	}
	return (c);
}
