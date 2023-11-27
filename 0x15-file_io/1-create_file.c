#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to filename
 * @text_content: pointer to string that will be written on file
 * Return: -1 for failure, 1 for success or Null if filename
 * is null
 */
int create_file(const char *filename, char *text_content)
{
	int open_int, write_bts, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	open_int = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	write_bts = write(open_int, text_content, len);
	if (open_int < 0 || write_bts < 0)
	{
		return (-1);
	}
	close(open_int);

	return (1);
}
