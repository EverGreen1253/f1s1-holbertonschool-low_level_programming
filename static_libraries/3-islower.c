#include "main.h"

/**
 * _islower - checks if char passed in is lowercase or not
 * @c: The character to evaluate
 *
 * Return: On success 1.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
