#include <stdio.h>

/**
 * main - check the code
 *
 * Return: FizzBuzz.
 */
int main(void)
{
	int num = 1;
	int max = 100;

	while (num <= max) {

		if ((num % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}

		num = num + 1;

		if (num <= max)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
