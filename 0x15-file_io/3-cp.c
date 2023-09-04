#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void close_fd(int fd, const char *file);
void copy_file(const char *file_from, const char *file_to);

/**
 * close_fd - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to be closed.
 * @file: The name of the file associated with the file descriptor.
 */
void close_fd(int fd, const char *file)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
		exit(100);
	}
}

/**
 * copy_file - Copies the contents of one file to another.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, r, w;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	do {
		r = read(fd_from, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		w = write(fd_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	} while (r > 0);

	close_fd(fd_from, file_from);
	close_fd(fd_to, file_to);
}

/**
 * main - Entry point, copies the contents of one file to another.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
