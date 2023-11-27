#include "main.h"

/**
 * read_textfile - reads a textfile and print to standard output
 * @filename: pointer to file name
 * @letters: number of chars to be read and printed from the file
 * Return: 0 if name  of file is null, if it cannot be read,
 *  and number of bytes if success
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_int, read_bts, write_bts;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_int = open(filename, O_RDONLY);
	read_bts = read(open_int, buffer, letters);
	write_bts = write(1, buffer, read_bts);

	if (open_int == -1 || read_bts < -1 || write_bts < -1 ||
	write_bts != read_bts)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(open_int);

	return (write_bts);
}
