#include "main.h"

/**
 * rev_string - check the code
 * @s: pointer to the string to reverse
 *
 * Return: reverses the string passed in.
 */
void rev_string(char *s)
{
	int count = 0;
	int length;
	char temp;

	while (s[count] != '\0')
	{
		count = count + 1;
	}

	length = count - 1;

	while (count >= (length / 2))
	{
		count = count - 1;
		temp = s[count];
		s[count] = s[length - count];
		s[length - count] = temp;

	}
}
