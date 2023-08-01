#include "main.h"
#include <stdio.h>
/**
 * _memset - check the code
 *@s: pointer to mem area to be filled
 *@b: byte to use for filling
 *@n: num of bytes to fill 
 *
 * Return: nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;
	while (count < n)
	{
		s[count] = b;
		count = count + 1;
	}

	return s;
}
