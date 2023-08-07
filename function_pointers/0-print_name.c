#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - check the code
 * @name: the string to print
 * @f: the function to call to handle the printing
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
