#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 * @c: the ASCII int value of the digit passed in
 *
 * Return: 1 or 0.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}

