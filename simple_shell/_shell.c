#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - simple shell! The big one!
 *
 * Return: Always 0.
 */
int main(void)
{
	int count = 0;
	char *buffer = NULL, *token, *temp;
	size_t bufsize = 65535;
	size_t typed;
	char **argv;

	printf("$ ");
	typed = getline(&buffer, &bufsize, stdin);
	// printf("%zu characters were read.\n", typed);

	temp = malloc(strlen(buffer) + 1);
	if (malloc == NULL)
	{
		exit(98);
	}
	strcpy(temp, buffer);

	token = strtok(temp, " ");
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}

	// printf("You typed: %s\n",buffer);
	// printf("count - %d\n", count);

	argv = malloc(sizeof(char *) * count + 1);

	return(0);
}
