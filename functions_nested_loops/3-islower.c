#include "main.h"

/**
 * _islower - checks if char passed in is lowercase or not
 * @ch: The character to evaluate
 *
 * Return: On success 1.
 */
int _islower(char ch)
{
	int char_ascii;

	char_ascii = ch;

	if (char_ascii >= 97 && char_ascii <= 122)
	{
		return (1);
	}

	return (0);
}
