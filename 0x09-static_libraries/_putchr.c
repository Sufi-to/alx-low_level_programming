#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to output
 * @c: character to be printed
 * Return: On success 1 and on error 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
