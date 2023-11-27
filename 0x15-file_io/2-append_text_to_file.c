#include "main.h"
/**
 * append_text_to_file - function that appends text to file
 * @filename: pointer to filename
 * @text_content: pointer to string that will be appended
 * Return: -1 for failure, 1 for success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_f, write_f;

	if (filename == NULL)
		return (-1);

	open_f = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL && open_f < 0)
	{
		close(open_f);
		return (-1);
	}
	else if (text_content == NULL && open_f > 0)
	{
		close(open_f);
		return (1);
	}
	write_f = write(open_f, text_content, sizeof(text_content));
	if (write_f < 0)
	{
		close(open_f);
		return (-1);
	}
	close(open_f);
	return (1);
}
