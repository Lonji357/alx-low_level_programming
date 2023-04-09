#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: name of the file
 * @text_content: NULL terminated string
 * Return: 1 if true, -1 if false
 */
int create_file(const char *filename, char *text_content)
{
	int fd, chars_written, str_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len]; str_len++)
			;

		chars_written = write(fd, text_content, str_len);
		if (chars_written != str_len)
			return (-1);
	}

	close(fd);
	return (1);
}
