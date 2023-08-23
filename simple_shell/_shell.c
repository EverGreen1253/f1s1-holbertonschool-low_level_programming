#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include "main.h"


/**
 * main - simple shell! The big one!
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0, count = 0;
	char *buffer = NULL, *token, *temp = NULL, *cmd;
	size_t bufsize = 65535;
	size_t typed;
	char **argv = NULL;

	while (1)
	{
		printf("$ ");
		typed = getline(&buffer, &bufsize, stdin);
		// printf("%zu characters were read.\n", typed);

		temp = malloc(strlen(buffer) + 1);
		if (temp == NULL)
		{
			free(temp);
			exit(98);
		}
		strcpy(temp, buffer);

		/* we count how many items there are first */
		token = strtok(temp, " ");
		while (token != NULL)
		{
			count++;
			token = strtok(NULL, " ");
		}
		free(temp);

		//printf("You typed: %s\n",buffer);
		//printf("count - %d\n", count);

		// let's load up the argv array
		argv = malloc(sizeof(char *) * count + 1);
		if (argv == NULL)
		{
			free(argv);
			exit(98);
		}

		token = strtok(buffer, " ");
		i = 0;
		while (token != NULL)
		{
			temp = malloc(strlen(token) + 1);
			if (temp == NULL)
			{
				free(temp);
				exit(98);
			}

			// change the newline into a null character
			strcpy(temp, token);
			temp[strcspn(temp, "\n")] = '\0';
			argv[i] =  temp;

			token = strtok(NULL, " ");
			i = i + 1;
		}
		argv[i] = NULL;

		pid_t pid = fork();
		if (pid < 0)
		{
			// handle error
		}
		else if (pid == 0)
		{
			execvp(argv[0], argv);
			// if execvp returns, there was an error
			perror("execvp");
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(NULL);
		}
	}
	free(buffer);

	return (0);
}


