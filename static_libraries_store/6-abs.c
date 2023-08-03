#include "main.h"

/**
 * _abs - returns positive value of numbers passed in
 * @value: the number value to evaluate
 *
 * Return: positive int.
 */
int _abs(int value)
{
	if (value < 0)
	{
		return (-value);
	}
	else
	{
		return (value);
	}
}
