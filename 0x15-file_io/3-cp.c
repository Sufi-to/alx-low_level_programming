#include "main.h"

void file_close(int fd);
/**
 * file_close - function to close opened files
 * @fd : file descriptor to be closed
 * Return: nothing
*/
void file_close(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - entry point for the program that copies on file
 * to another
 * @argc: number of arguments
 * @argv: an array that contains the arguments
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int open_from, open_to, read_to;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_from = open(argv[1], O_RDONLY);
	if (open_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	open_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_to = read(open_from, buffer, BUFSIZ)) > 0)
	{
		if (open_to < 0 || write(open_to, buffer, read_to) != read_to)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(open_from);
			exit(99);
		}
	}
	if (read_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_close(open_from);
	file_close(open_to);

	return (0);
}
