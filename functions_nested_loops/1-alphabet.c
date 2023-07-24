#include "main.h"

/**
 * print_alphabet - calls _putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;
	char final_ch;

	ch = 'a';
	final_ch = 'z' + 1;

	while (ch != final_ch)
	{
		_putchar(ch);
		ch = ch + 1; 
	}

	_putchar('\n');
}
