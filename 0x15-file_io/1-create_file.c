#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to filename
 * @text_content: pointer to string that will be written
 * Return: -1 for failure, 1 for success.
 */
int create_file(const char *filename, char *text_content)
{
	int open_int, write_bts, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		open_int = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (open_int < 0)
		{
			close(open_int);
			return (-1);
		}
		else
		{
			for (len = 0; text_content[len];)
			{
				len++;
			}
			write_bts = write(open_int, text_content, len);
			if (write_bts < 0)
			{
				close(open_int);
				return (-1);
			}
			else
			{
				close(open_int);
				return (1);
			}
		}
	}
	return (1);
}
