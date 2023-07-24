#include <stdio.h>
  
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char final_char;
        char ch;

        final_char = 'z' + 1;
        ch = 'a';

        while (ch != final_char)
        {
                putchar(ch);
                ch = ch + 1;
        }

	final_char = 'Z' + 1;
	ch = 'A';

        while (ch != final_char)
        {
                putchar(ch);
                ch = ch + 1;
	}

        putchar('\n');

        return (0);
}
