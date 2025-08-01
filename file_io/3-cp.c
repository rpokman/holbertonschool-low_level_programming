#include "main.h"

/**
 * print_error - Prints an error message and exits with a specific code.
 * @code: Exit code.
 * @message: Error message.
 * @arg: Argument to print in the error message.
 */
void print_error(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, arg);
	exit(code);
}

/**
 * main - Copies the content of one file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, exits with codes 97 to 100 on failure.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t read_bytes, written_bytes;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file", av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to", av[2]);
	}

	while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to", av[2]);
		}
	}
	if (read_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file", av[1]);
	}

	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd", av[1]);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd", av[2]);

	return (0);
}
