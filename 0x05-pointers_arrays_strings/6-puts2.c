#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: string from which the characters are to be printed
 *
*/
void puts2(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (len < i)
	{
		_putchar(str[len]);
		len = len + 2;
	}
	_putchar('\0');
}
