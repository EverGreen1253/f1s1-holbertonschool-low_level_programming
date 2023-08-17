#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file - check the code
 * @filename: string of filename
 * @text_content: text to append
 *
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_APPEND, 0600);
	int i = 0;

	if (fd < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	while (text_content[i] != '\0')
	{
		i = i + 1;
	}

	write(fd, text_content, (i));

	if (close(fd) < 0)
	{
		return (-1);
	}

	return (1);
}
