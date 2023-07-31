#include "main.h"

/**
 * *cap_string - check the code
 * @c: pointer to string first elem
 *
 *Pattern recognition time! Capitalise at start of string ot when the prev char is not a letter
 *
 * Return: pointer to the string.
 */
char *cap_string(char *c)
{
	int capnext = 1;
	int count = 0;
	int letter;
	int prevchar;

	while (c[count] != '\0')
	{
		if (count > 0)
		{
			prevchar = c[count - 1];
			if (prevchar < 45 || (prevchar > 57 && prevchar < 65) || (prevchar > 90 && prevchar < 97) || prevchar > 122)
			{
				capnext = 1;
			
			}
			else
			{
				capnext = 0;
			}
		}

		letter = c[count];

		if (letter >= 97 && letter <= 122)
		{
			if (capnext == 1)
			{
				c[count] = letter - 32;
				capnext = 0;
			}
		}

		count = count + 1;
	}

	return c;
}
