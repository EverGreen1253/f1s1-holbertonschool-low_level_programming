#include "main.h"

/**
 * _isalpha - check the code.
 * @c: the character to evaluate
 *
 * Return: 1 if true.
 */
int _isalpha(int c)
{
	int u_start = 'A';
	int u_end = 'Z';
	int l_start = 'a';
	int l_end = 'z';

	if ((c >= u_start && c <= u_end) || (c >= l_start && c <= l_end))
	{
		return (1);
	}

	return (0);
}
