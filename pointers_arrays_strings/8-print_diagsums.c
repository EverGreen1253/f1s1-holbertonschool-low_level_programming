#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @a: square array
 * @size: size of the square
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
    int row = 0;
    int col = 0;
    int ltr = 0;
    int rtl = 0;
    int index;

    while (row < size)
    {
        while (col < size)
        {
            if (row == col)
            {
                index = (size * row) + row;
                ltr = ltr + a[index];
            }
            if (col == ((size - 1) - row))
            {
                index = (size * row) + ((size - 1) - row);
                rtl = rtl + a[index];
            }
            col = col + 1;
        }
        row = row + 1;
        col = 0;
    }
    printf("%d, ", ltr);
    printf("%d\n", rtl);

}
