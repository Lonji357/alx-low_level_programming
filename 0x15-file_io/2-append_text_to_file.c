#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text
 *
 * @filename: file name
 * @text_content: NULL terminated string at the end
 * of the file.
 * Return: 1 if true and -1 if false.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, chars_appended, str_len = 0;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (; text_content[str_len]; str_len++)
			;
		chars_appended = write(f, text_content, str_len);
		if (chars_appended != str_len)
			return (-1);
	}
	close(f);
	return (1);
}
