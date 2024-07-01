#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code for
 * @a: array pointer
 * @n: number of elements
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		count = count + 1;

		if (count != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
