#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to stderr and exits.
 * @exit_code: Exit code.
 * @msg: The message to print.
 * @arg: Additional string (filename or fd).
 */
void print_error(int exit_code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, arg);
	exit(exit_code);
}

/**
 * main - Copies content of one file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, exits with 97-100 on error.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		print_error(97, "Usage:", "cp file_from file_to");

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file", av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to", av[2]);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to", av[2]);
		}
	}
	if (bytes_read == -1)
		print_error(98, "Error: Can't read from file", av[1]);

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

	return (0);
}
