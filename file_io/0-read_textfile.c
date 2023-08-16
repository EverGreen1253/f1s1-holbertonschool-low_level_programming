#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - check the code
 * @filename: name of file
 * @letters: num of letters to read and print
 *
 * Return: num of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t result = 0;
	int fd = open(filename, O_RDONLY), sz;
	char *c = malloc(letters);

	if (filename == NULL || (fd < 0) || c == NULL)
	{
		return (0);
	}

	sz = read(fd, c, letters);
	c[sz] = '\0';

	write(1, c, sz);

	result = sz;

	if (close(fd) < 0)
	{
		return (0);
	}

	return (result);
}
