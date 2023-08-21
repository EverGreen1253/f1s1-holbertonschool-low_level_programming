#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * _which - searching for a file in PATH folders
 *
 * Return: Always 0.
 */
int main(void) {

	char **argv;
	char *pathvar, *token;
	pathvar = getenv("PATH");
	int i = 0;

	argv = malloc(sizeof(char *) * 9999);

	token = strtok(pathvar, ":");
	while (token != NULL)
	{
		printf(" - %s\n", token);

		argv[i] = malloc(strlen(token) + 1);
		strcpy(argv[i], token);

		i = i + 1;
		token = strtok(NULL, ":");
	}
	argv[i] = NULL;

	// argv = realloc(argv, sizeof(char *) * i);

	//cmd = argv[0];
	//cmd[strcspn(cmd, "\n")] = '\0';

	return (0);
}
