#include "main.h"

#define BUFFER_SIZE 1024

/**
 * check_close - Closes a file descriptor and handles errors
 * @fd: The file descriptor to close
 */
void check_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		check_close(fd_from);
		exit(99);
	}

	while ((r_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			check_close(fd_from);
			check_close(fd_to);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		check_close(fd_from);
		check_close(fd_to);
		exit(98);
	}

	check_close(fd_from);
	check_close(fd_to);
	return (0);
}
