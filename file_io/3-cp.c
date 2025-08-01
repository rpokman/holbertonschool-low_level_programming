#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void print_error(int code, const char *message, const char *arg);
void copy_file(const char *file_from, const char *file_to);

/**
 * main - Entry point. Checks arguments and starts file copy.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, exits with codes 97 to 100 on failure.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(av[1], av[2]);
	return (0);
}

/**
 * copy_file - Copies content from one file to another.
 * @file_from: Source file.
 * @file_to: Destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t read_bytes, written_bytes;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		if (close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		print_error(99, "Error: Can't write to", file_to);
	}

	while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			if (close(fd_from) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
				exit(100);
			}
			if (close(fd_to) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
				exit(100);
			}
			print_error(99, "Error: Can't write to", file_to);
		}
	}

	if (read_bytes == -1)
	{
		if (close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		if (close(fd_to) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}
		print_error(98, "Error: Can't read from file", file_from);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * print_error - Prints an error message and exits.
 * @code: Exit code.
 * @message: Error message.
 * @arg: Argument to show.
 */
void print_error(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, arg);
	exit(code);
}
