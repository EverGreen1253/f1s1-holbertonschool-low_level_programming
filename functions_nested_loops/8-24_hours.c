#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * jack_bauer - check the code
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int hours_max = 0;
	int hours_f = 0;
	int hours_s = 0;

	int min_reset = 0;
	int min_f = 0;
	int min_s = 0;

	while (hours_max != 1)
	{
		while (min_reset != 1)
		{
			_putchar(hours_f + 48);
			_putchar(hours_s + 48);
			_putchar(':');
			_putchar(min_f + 48);
			_putchar(min_s + 48);
			_putchar('\n');

			min_s = (min_s + 1) % 10;

			if (min_s == 0)
			{
				min_f = min_f + 1;
			}

			if (min_f == 6 && min_s == 0)
			{
				min_reset = 1;
			}
		}

		hours_s  = (hours_s + 1) % 10;

		if (hours_s == 0)
		{
			hours_f = hours_f + 1;
		}

		if (hours_f == 2 && hours_s == 4)
		{
			hours_max = 1;
		}

		min_reset = 0;
		min_f = 0;
		min_s = 0;
	}
}
