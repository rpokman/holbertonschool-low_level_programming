#include "main.h"

#define BUF_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exits with code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_from), exit(99);
	}

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
			dprintf(2, "Error: Can't write to %s\n", argv[2]),
			close(fd_from), close(fd_to), exit(99);
	}
	if (r == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]),
		close(fd_from), close(fd_to), exit(98);
	if (close(fd_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
