#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @c: int param to count up/down from
 *
 * Return: comma separated sequence of ints to 98.
 */
void print_to_98(int c)
{
	int curr = c;

	while (curr != 98)
	{
		printf("%d, ", curr);

		if (c > 98)
		{
			curr = curr - 1;
		}
		else if (c < 98)
		{
			curr = curr + 1;
		}
	}
	printf("%d\n", 98);
}
