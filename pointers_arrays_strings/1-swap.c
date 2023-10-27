#include "main.h"

/**
 * swap_int - check the code
 * @a: first int
 * @b: second int
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
