#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to filename
 * @text_content: pointer to string that will be written
 * Return: -1 for failure, 1 for success.
 */
int create_file(const char *filename, char *text_content)
{
	int open_int, write_bts;

	if (filename == NULL)
		return (-1);

	if (filename && text_content==NULL)
	{
		open_int = open(filename, O_CREAT| O_TRUNC);
		if (open_int > 0)
		{
			close(open_int);
			return (1);
		}
		else
		{
			return (-1);
		}
	}

	if (filename && text_content != NULL)
	{
		open_int = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (open_int < 0)
		{
			close(open_int);
			return (-1);
		}
		else
		{
			write_bts = write(open_int, text_content, sizeof(text_content));
			if (write_bts < 0)
			{
				close(open_int);
				return (-1);
			}
			else
			{
				close (open_int);
				return (1);
			}
		}
	}

	return (0);
}

