#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: pointer to array's first elem
 * @n: num of elements in array
 *
 * Return: no output.
 */
void reverse_array(int *a, int n)
{
	int count = 0;
	int temp;
	int max = n - 1;

	while (count < (max / 2))
	{
		temp = a[count];
		a[count] = a[max - count];
		a[max - count] = temp;

		count = count + 1;
	}
}
