#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to filename to be created
 * @text_content: pointer to string that will be written on file
 * Return: -1 for failure, 1 for success or Null if filename
 * is null
 */
int create_file(const char *filename, char *text_content)
{
	int open_int = 0, write_bts = 0, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	open_int = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_bts = write(open_int, text_content, len);
	if (open_int < 0 || write_bts < 0)
	{
		close(open_int);
		return (-1);
	}

	close(open_int);

	return (1);
}
