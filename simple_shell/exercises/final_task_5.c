#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	char **argv;
	char *pathvar, *line;
	int i = 0;
	char *nl;

	argv = malloc(sizeof(char *) * 9999);

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
    }

	line = strtok(pathvar, ":");
	while (token != NULL)
	{
		// need to allocate memory for final

		nl = malloc(strlen(line) + 1);
		strcpy(nl, token);
		argv[i] = nl;

		printf("Status of %s: ", argv[i]);
		token = strtok(NULL, ":");
	}
	argv[i] = NULL;

	argv = realloc(argv, sizeof(char *) * i);

	//cmd = argv[0];
	//cmd[strcspn(cmd, "\n")] = '\0';

	return (0);
}

