#include "main.h"
#include <stdio.h>

/**
 * *leet - check the code for
 * @c: pointer to first elem of string passed in
 *
 * Return: pointer to string.
 */
char *leet(char *c)
{
	int count = 0;
	int letter;
	int map[255];

	/**
	 * Init a map
	 */
	while (count < 255)
	{
		map[count] = 0;
		count = count + 1;
	}
	map[65] = map[97] = 52;
	map[69] = map[101] = 51;
	map[79] = map[111] = 48;
	map[84] = map[116] = 55;
	map[76] = map[108] = 49;

	count = 0;

	while (c[count] != '\0')
	{
		letter = c[count];
		if (map[letter] != 0)
		{
			c[count] = map[letter];
		}
		count = count + 1;
	}
	return (c);
}
