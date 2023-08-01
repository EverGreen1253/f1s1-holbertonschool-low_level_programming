#include "main.h"
#include <stdbool.h>

/**
 * *cap_string - check the code
 * @c: pointer to string first elem
 *
 *Pattern recognition time!
 *
 * Return: pointer to the string.
 */
char *cap_string(char *c)
{
	int capnext = 1;
	int count = 0;
	int letter;
	int prevchar;
	bool cond;

	while (c[count] != '\0')
	{
		if (count > 0)
		{
			prevchar = c[count - 1];
			cond = (prevchar < 45);
			cond = cond || (prevchar > 45 && prevchar < 48);
			cond = cond || (prevchar > 57 && prevchar < 65);
			cond = cond || (prevchar > 90 && prevchar < 97);
			cond = cond || (prevchar > 122);
			capnext = cond ? 1 : 0;
		}
		letter = c[count];
		if (capnext == 1 && letter >= 97 && letter <= 122)
		{
			c[count] = letter - 32;
			capnext = 0;
		}
		count = count + 1;
	}
	return (c);
}
