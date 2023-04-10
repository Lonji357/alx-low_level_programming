#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * open_source_file - opens the source file.
 *
 * @file_from: the name of the source file.
 *
 * Return: the file descriptor on success, -1 on failure.
 */
int open_source_file(const char *file_from)
{
	int fd;

	fd = open(file_from, O_RDONLY, 0);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	return (fd);
}

/**
 * open_dest_file - opens the destination file.
 *
 * @file_to: the name of the destination file.
 *
 * Return: the file descriptor on success, -1 on failure.
 */
int open_dest_file(const char *file_to)
{
	int fd;

	fd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	return (fd);
}

/**
 * copy_file - copies the content of a file to another file.
 *
 * @fd_from: the file descriptor of the source file.
 * @fd_to: the file descriptor of the destination file.
 *
 * Return: void.
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t chars_read, chars_written;
	char buf[BUFFER_SIZE];

	while ((chars_read = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		chars_written = write(fd_to, buf, chars_read);
		if (chars_written != chars_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
			exit(99);
		}
	}

	if (chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
		exit(98);
	}
}

/**
 * main - copies the content of a file to another file.
 *
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, file_closed;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open_source_file(argv[1]);
	fd_to = open_dest_file(argv[2]);

	copy_file(fd_from, fd_to);

	file_closed = close(fd_from);
	if (file_closed != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close source file\n");
		exit(100);
	}

	file_closed = close(fd_to);
	if (file_closed != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close destination file\n");
		exit(100);
	}

	return (0);
}
