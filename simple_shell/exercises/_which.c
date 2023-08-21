#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _which - searching for a file in PATH folders
 *
 * Return: Always 0.
 */
int main(void)
{
	char *pathvar, *token;
	pathvar = getenv("PATH");

	token = strtok(pathvar, ":");
	while (token != NULL)
	{
		printf(" - %s\n", token);

		token = strtok(NULL, ":");
	}

	return (0);
}
