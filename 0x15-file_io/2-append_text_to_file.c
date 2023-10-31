#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the text to append to the file (a NULL-terminated string)
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | 0_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[bytes_written] != '\0')
			bytes_written++;
		if (write(fd, text_content, bytes_written) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
